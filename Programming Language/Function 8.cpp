#include <iostream>
using namespace std;

void ref(int& x) // Reference function; &x means to take the address, while x is used to access the value
{
    x = 10; // Set the value of x to 10
    cout << "Value of x: " << x << endl; // Output the value of x
    cout << "Address of x: " << &x << endl; // Output the address of x
}

void main()
{
    int a = 5;
    cout << "Value of a: " << a << endl; // Output the value of a
    cout << "Address of a: " << &a << endl; // Output the address of a
    
    // Reference concept
    // Using the address to share and modify the value
    ref(a); // Call the reference function with a
    cout << "Value of a: " << a << endl; // Output the modified value of a
    cout << "Address of a: " << &a << endl; // Output the address of a
}
