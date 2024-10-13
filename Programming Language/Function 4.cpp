#include <iostream>
using namespace std;

int input()
{
    int n;
    cout << "Please enter a number: "; // Prompt for input
    cin >> n;
    return n; // Return the input value
}

void main()
{
    int num;
    // Get a number from the input function and store it
    num = input(); // Call the input function
    cout << "num: " << num; // Output the value of num
}
