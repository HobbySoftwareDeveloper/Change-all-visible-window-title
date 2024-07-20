#include <windows.h>
#include <iostream>

BOOL CALLBACK EnumWindowsProc(HWND hWnd, LPARAM lParam) {
    char newTitle[] = "Your text here";
    SetWindowTextA(hWnd, newTitle);
    return TRUE;
}

int main() {
    while (true)
    {
        EnumWindows(EnumWindowsProc, NULL);
        Sleep(10);

    }
    
    return 0;
}