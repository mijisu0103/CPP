#include <iostream>
using namespace std;

// Reference continued
void swap(int& x, int& y) // Function to swap two integers using references
{
    int temp; // Temporary variable to hold the value during swap
    temp = x; // Store the value of x in temp
    x = y;    // Assign the value of y to x
    y = temp; // Assign the value in temp to y
}

void main()
{
    int a = 5, b = 10;
    cout << "a = " << a << ", b = " << b << endl; // Output initial values of a and b
    swap(a, b); // Call the swap function
    cout << "a = " << a << ", b = " << b << endl; // Output values after swap
}
