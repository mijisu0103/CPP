#include <iostream>
using namespace std;

void print(int num) // Function to print the number
{
    cout << "num: " << num; // Output the value of num
}

void main()
{
    int n;
    cout << "Please enter a number: "; // Prompt for input
    cin >> n; // Read input into n
    print(n); // Call the print function with n

    // Create a print function that receives n as a parameter and outputs it.
}
