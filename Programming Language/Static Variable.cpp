#include <iostream>

using namespace std;

int tot = 0; // The static keyword is hidden here.

void main()
{
    int a = 0;
    for (a = 1; a <= 100; a++)
    {
        tot += a; // Accumulate the sum of numbers from 1 to 100
    }
    cout << tot << endl; // Output the total sum
}
