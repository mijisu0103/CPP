#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

struct ITEM
{
    string wn; // Weapon name
    int wp;    // Weapon price
};

void main()
{
    int gold = 100000;
    string Bag[10] = { "", };
    
    ITEM item[4];

    item[0].wn = "M4";
    item[0].wp = 16000;
    item[1].wn = "K2";
    item[1].wp = 14000;
    item[2].wn = "AK-47";
    item[2].wp = 30000;
    item[3].wn = "Grenade";
    item[3].wp = 50000;

    int input;
    int sel;

    int BagCnt = 0;

    while (true)
    {
        system("cls");
        // Shop
        cout << "=================================" << endl;
        cout << "Welcome to the shop." << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << i + 1 << "." << setw(6) << item[i].wn << setw(7) // setw() function gives space
                 << item[i].wp << endl;
        }
        cout << "Select weapon number" << endl;
        cin >> input;
        cout << "1. Buy 2. Exit 3. Bag" << endl;
        cin >> sel;

        if (sel == 1)
        {
            // Purchase
            switch (input)
            {
            case 1: // M4
                cout << item[input - 1].wn << " has been purchased." << endl;
                Bag[(BagCnt++) % 10] = item[input - 1].wn;
                Sleep(1000);
                break;

            case 2: // K2
                cout << item[input - 1].wn << " has been purchased." << endl;
                Bag[(BagCnt++) % 10] = item[input - 1].wn;
                Sleep(1000);
                break;

            case 3: // AK-47
                cout << item[input - 1].wn << " has been purchased." << endl;
                Bag[(BagCnt++) % 10] = item[input - 1].wn;
                Sleep(1000);
                break;

            case 4: // Grenade
                cout << item[input - 1].wn << " has been purchased." << endl;
                Bag[(BagCnt++) % 10] = item[input - 1].wn;
                Sleep(1000);
                break;
            }
            cout << "Weapons cannot be refunded." << endl;
        }
        else if (sel == 2)
        {
            cout << "Exiting the shop." << endl;
            break;
        }
        else if (sel == 3)
        {
            system("cls");
            cout << "Bag contents" << endl;
            for (int i = 0; i < 10; i++)
            {
                cout << Bag[i] << endl;
            }
            system("pause");
        }
    }
}
