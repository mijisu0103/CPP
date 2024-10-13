#include <iostream>
using namespace std;

int my_abs(int x); // Function prototype for my_abs

void main()
{
    int a, b;

    cout << "Please enter an integer: "; // Prompt for input
    cin >> a;
    b = my_abs(a); // Get the absolute value of a
    cout << "The absolute value of " << a << " is: " << b; // Output the result
}

int my_abs(int x)
{
    int y;

    if (x > 0)
    {
        y = x; // If x is positive, assign it to y
    }
    else
    {
        y = -x; // If x is negative, assign its negative to y
    }
    
    return y; // Return the absolute value
}
