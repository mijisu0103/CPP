#include <iostream>

using namespace std;

void main()
{
    /* int data[5], cnt, sum = 0;
    data[0] = 10;
    data[1] = 20;
    data[2] = 30;
    data[3] = 40;
    data[4] = 50;

    for (cnt = 0; cnt < 5; cnt++)
        sum += data[cnt];

    cout << "sum = " << sum; */

    /* int arr1[5] = { 11,12,13,14,15 };
    int arr2[5] = { 10,20,30 };
    int cnt;

    for (cnt = 0; cnt < 5; cnt++)
    {
        cout << "arr1[" << cnt << "] = " << arr1[cnt] << endl;
    }
    
    for (cnt = 0; cnt < 5; cnt++)
    {
        cout << "arr2[" << cnt << "] = " << arr2[cnt] << endl;
    } */

    char ch[] = {'C', 'o', 'm', 'p','u', 't', 'e','r'};
    char str[] = "Computer"; 
    // If the size in the brackets is left empty, it will automatically set the size based on the number of characters inside the parentheses.

    int chSize, strSize, cnt;

    chSize = sizeof(ch);
    strSize = sizeof(str); // It returns 9 because of the null character.

    cout << "Size of array ch: " << chSize << endl;
    cout << "Size of array str: " << strSize << endl;

    for (cnt = 0; cnt < chSize; cnt++)
    {
        cout << ch[cnt] << endl;
    }
    
    cout << endl;
    
    for (cnt = 0; cnt < strSize - 1; cnt++) // Exclude the null character by using strSize - 1
    {
        cout << str[cnt] << endl;
    }
}
