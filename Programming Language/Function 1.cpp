#include <iostream>
using namespace std;

int add(int x, int y)
{
    int z;

    z = x + y; // Add x and y

    return z; // Return the result
}

void main()
{
    // There are two numbers.
    int a = 10, b = 20, c;
    // Create a function.
    // Make a function to add the two numbers.
    c = add(a, b); // Call the add function
    cout << "a + b = " << c; // Output the result
}
