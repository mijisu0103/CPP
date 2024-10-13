#include <iostream>
#include <malloc.h>

using namespace std;

void main()
{
    // C style dynamic allocation // In C, dynamic allocation is done using malloc, similar to how new is used in C++.
    // = char str[100];
    // char* str;
    // str = (char*)malloc(100); // C++ new

    // cout << "Please enter a string: "; 
    // cin >> str;
    // cout << str;
    // free(str); // C++ delete

    int* pi = new int[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        pi[i] = i;
    }

    for (i = 0; i < 5; i++)
    {
        cout << "p[" << i << "] = " << pi[i] << endl;
    }

    delete[] pi; 
}
