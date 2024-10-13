#include <iostream>
using namespace std;

int sum(int m, int n); // Function prototype for sum

void main()
{
    int m, n, hap;
    cout << "Please enter m and n: "; // Prompt for input
    cin >> m >> n;
    hap = sum(m, n); // Call the sum function
    cout << "The sum from " << m << " to " << n << " is: " << hap; // Output the result
}

int sum(int m, int n)
{
    int i, hap = 0;

    for (i = m; i <= n; i++) // Loop from m to n
    {
        hap += i; // Accumulate the sum
    }
    
    return hap; // Return the total sum
}
