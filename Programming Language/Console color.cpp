#include <iostream>
#include <Windows.h>
using namespace std;

// Change text color
void setcolor(unsigned short text)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text);
}

// Change text and background color
void setcolor(unsigned short text, unsigned short back)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text | (back << 4));
}

void main()
{
    setcolor(5); // Set text color to purple
    cout << "Hello, World!" << endl;

    // Color codes:
    // 0 - Black
    // 1 - Blue
    // 2 - Green
    // 3 - Cyan
    // 4 - Red
    // 5 - Magenta
    // 6 - Yellow
    // 7 - White
    // 8 - Gray
    // 9 - Light Blue
    // 10 - Light Green
    // 11 - Light Cyan
    // 12 - Light Red
    // 13 - Light Magenta
    // 14 - Light Yellow
    // 15 - Bright White
}
