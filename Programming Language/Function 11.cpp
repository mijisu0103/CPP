#include <iostream>
using namespace std;

void print()
{
    cout << "Hello, World!" << endl; // Output a greeting
    print(); // Recursive call to the same function
}

void main()
{
    // Recursive function // A function that calls itself
    print(); // Start the recursive calls
}
