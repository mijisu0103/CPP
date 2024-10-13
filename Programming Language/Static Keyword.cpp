#include <iostream>
using namespace std;

// Global variables - memory space and address space are different.
// int c, d;

void func()
{
    static int x = 0; // Uses memory space like a global variable and retains its value.
    cout << "x = " << x << endl;
    x++; // Increment the value of x
}

void main()
{
    // Local variables in the function
    // int a, b;
    // cout << "Addresses of a and b: " << &a << "," << &b << endl;
    // static int c, d; // The static keyword makes local variables behave like global variables
    // cout << "Addresses of c and d: " << &c << "," << &d << endl;

    func(); // Call func multiple times
    func();
    func();
    func();
    func();
}
