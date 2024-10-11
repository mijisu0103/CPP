#include <iostream>
using namespace std;

int ReturnEx()
{
    while(true)
    {    
        int a;
        cout << "Enter a value: " << endl;
        cin >> a;

        if (a % 2 == 0)
        {
        cout << "It's an even number." << endl;
        }
        else
        {
            return 1; // Exits the function.
            // The return used here is similar to break;.
            // break exits the loop, while return exits the function.
        }
        //123
    }
}

void main()
{
    int cnt = 1, sum = 0;

    do {
        sum += cnt;
        cnt++;
    } while (cnt <= 100);

    cout << "The sum from 1 to 100 is: " << sum;

    // Using do~while to enter scores for Korean, English, and Math
    // Calculate total and average, ask if the user wants to continue (Y/N)
    int Kor, Eng, Mat, tot;
    float avg;
    char ch;

    do {
        cout << "Enter scores for Korean, English, and Math: ";
        cin >> Kor >> Eng >> Mat;

        tot = Kor + Eng + Mat;
        avg = tot / 3.0f;
        
        cout << "Korean = " << Kor << endl;
        cout << "English = " << Eng << endl;
        cout << "Math = " << Mat << endl;
        cout << "Total = " << tot << endl;
        cout << "Average = " << avg << endl;

        cout << "Do you want to continue? (Y/N) ";
        cin >> ch;

    } while (ch == 'Y' || ch == 'y');

    // For loop to calculate the sum from 1 to 100
    int sum = 0;

    for (int i = 1; i <= 100; i++)
        sum += i;
    
    cout << "The sum from 1 to 100 is: " << sum << endl;

    // For loop: Print spaces for numbers from 1 to 100, newline for multiples of 10
    for (int i = 1; i <= 100; i++)
    {
        if (i % 10 == 0)
        {
            cout << endl;
        }
        else
        {
            cout << " ";
        }
    }

    // For loop: Sum of numbers that are multiples of 3 and 7 from 1 to 100
    int hap = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 7 == 0)
        {
            hap += i;
        }
    }
    cout << "The sum of numbers from 1 to 100 that are multiples of 3 and 7 is " << hap << "." << endl;

    // Example of using goto statement
    int a;

jump:
    cout << "You have reached the goto statement." << endl;

    cout << "Hello" << endl;
    cin >> a;

    goto jump;


    int n, cnt = 1, sum = 0;

    cout << "Enter an integer: ";
    cin >> n;

    while (1)
    {
        if (cnt <= n)
        {
            sum += cnt;
        }
        else
        {
            goto stop;
        }
        cnt++;
    }

stop:
    cout << "The sum from 1 to " << n << " is: " << sum << endl;


    // Return
    // Return 0; returns 0 to the outside from the function.
    // When the function is void, return; exits the function.
    
    int takba = ReturnEx();
    if (takba == 1)
    {
        cout << "Received correctly." << endl;
    }


    // Check if a character is uppercase
    char a;
    cout << "Enter a character: ";
    cin >> a;
    if (a >= 'A' && a <= 'Z')
    {
        cout << a << " is an uppercase letter." << endl;
    }
}
