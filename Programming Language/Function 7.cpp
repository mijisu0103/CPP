#include <iostream>
using namespace std;

void swap(int* x, int* y) // Function to swap two integers
{
    int temp;

    temp = *x; // Store the value pointed to by x in temp
    *x = *y;   // Assign the value pointed to by y to the location pointed to by x
    *y = temp; // Assign the value in temp to the location pointed to by y
}

void main()
{
    int a = 5, b = 10;
    cout << "Before calling swap(): a = " << a << ", b = " << b << endl; // Output values before swap
    
    swap(&a, &b); // Call swap function with addresses of a and b

    cout << "After calling swap(): a = " << a << ", b = " << b << endl; // Output values after swap
}
