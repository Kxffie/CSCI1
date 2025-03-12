//
// Created by bryce on 3/6/2025.
//

#include "reactionTime.h"

#include <windows.h>
#include <iostream>
#include <vector>

int main() {
    // Region coordinates.
    const int x1 = 1300, y1 = 300;
    const int width = 1800 - 1300;
    const int height = 750 - 300;

    // Target color in BGR: Blue=52, Green=197, Red=8.
    const unsigned char targetB = 52;
    const unsigned char targetG = 197;
    const unsigned char targetR = 8;

    // Get screen device context.
    HDC hScreenDC = GetDC(NULL);
    if (!hScreenDC) {
        std::cout << "Failed to get screen DC." << std::endl;
        return 1;
    }

    // Create a memory device context.
    HDC hMemDC = CreateCompatibleDC(hScreenDC);
    if (!hMemDC) {
        std::cout << "Failed to create memory DC." << std::endl;
        ReleaseDC(NULL, hScreenDC);
        return 1;
    }

    // Create a compatible bitmap.
    HBITMAP hBitmap = CreateCompatibleBitmap(hScreenDC, width, height);
    if (!hBitmap) {
        std::cout << "Failed to create bitmap." << std::endl;
        DeleteDC(hMemDC);
        ReleaseDC(NULL, hScreenDC);
        return 1;
    }
    HGDIOBJ oldBitmap = SelectObject(hMemDC, hBitmap);

    // Set up BITMAPINFO for a 24-bit, top-down bitmap.
    BITMAPINFO bmi;
    ZeroMemory(&bmi, sizeof(bmi));
    bmi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    bmi.bmiHeader.biWidth = width;
    bmi.bmiHeader.biHeight = -height;  // negative for top-down orientation.
    bmi.bmiHeader.biPlanes = 1;
    bmi.bmiHeader.biBitCount = 24;
    bmi.bmiHeader.biCompression = BI_RGB;

    // Calculate row stride (each row padded to a multiple of 4 bytes).
    int stride = ((width * 3 + 3) & ~3);
    std::vector<unsigned char> buffer(stride * height);

    // Main loop.
    while (true) {
        // Copy the region from screen to memory.
        if (!BitBlt(hMemDC, 0, 0, width, height, hScreenDC, x1, y1, SRCCOPY)) {
            std::cout << "BitBlt failed." << std::endl;
            break;
        }

        // Retrieve pixel data.
        if (!GetDIBits(hMemDC, hBitmap, 0, height, buffer.data(), &bmi, DIB_RGB_COLORS)) {
            std::cout << "GetDIBits failed." << std::endl;
            break;
        }

        bool found = false;
        // Loop through each pixel.
        for (int row = 0; row < height && !found; row++) {
            unsigned char* pRow = buffer.data() + row * stride;
            for (int col = 0; col < width; col++) {
                int index = col * 3;
                unsigned char b = pRow[index];
                unsigned char g = pRow[index + 1];
                unsigned char r = pRow[index + 2];
                if (b == targetB && g == targetG && r == targetR) {
                    found = true;
                    break;
                }
            }
        }

        if (found) {
            // Compute center of region.
            int midX = x1 + width / 2;
            int midY = y1 + height / 2;
            SetCursorPos(midX, midY);

            // Simulate left mouse button click.
            INPUT input[2] = {};
            input[0].type = INPUT_MOUSE;
            input[0].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
            input[1].type = INPUT_MOUSE;
            input[1].mi.dwFlags = MOUSEEVENTF_LEFTUP;
            SendInput(2, input, sizeof(INPUT));
        }

        Sleep(5);
    }

    // Cleanup resources.
    SelectObject(hMemDC, oldBitmap);
    DeleteObject(hBitmap);
    DeleteDC(hMemDC);
    ReleaseDC(NULL, hScreenDC);
    return 0;
}
