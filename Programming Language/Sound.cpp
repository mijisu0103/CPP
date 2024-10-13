#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib") // Only works with WAV sound files

using namespace std;

void main()
{
    PlaySound(TEXT("name.wav"), 0, SND_FILENAME | SND_ASYNC | SND_LOOP); // Play the WAV file // LOOP for repetition
    _getch();

    // Need to place the downloaded file in the same folder as the source code for it to play

}
