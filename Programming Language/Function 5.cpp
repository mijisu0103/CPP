#include <iostream>

using namespace std;

float add(float a, float b); // Function prototype for add

void main()
{
    float x, y, z;

    cout << "Please enter two floating-point numbers: "; // Prompt for input
    cin >> x >> y;

    z = add(x, y); // Call the add function
    cout << x << " + " << y << " = " << z; // Output the result
}

float add(float a, float b)
{
    return (a + b); // Return the sum of a and b
}
