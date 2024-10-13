#include <iostream>
using namespace std;

void DeFun(int x, int y = 10, int z = 20) // Default parameters; you can't skip middle parameters
{
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl; // Output the values of x, y, and z
}

void main()
{
    // Default function
    // You must provide arguments based on the number of parameters.
    
    DeFun(5);           // Calls with x = 5, uses default values for y and z
    DeFun(5, 30);       // Calls with x = 5, y = 30, uses default for z
    DeFun(5, 30, 100);  // Calls with x = 5, y = 30, z = 100
}
