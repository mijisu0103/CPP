#include <iostream>
using namespace std;

// Structure -> Class
// Structure -> Mainly used to group variables
// Class -> Groups both variables and functions
// Structure -> Variables can be directly accessed when created
// Class -> Variables cannot be directly accessed when created
// Class -> private (accessible only internally for security), public (accessible externally)
// protected (keyword for sharing between inherited classes)

// struct Maple
// {
//     string charName;
//     int att;
//     int def;
//     int hp;
//
//     void print()
//     {
//         cout << charName << endl;
//         cout << att << endl;
//         cout << hp << endl;
//     }
// };
//
// void main()
// {
//     Maple mp; // mp = 'object'
//     Maple mp2;
//
//     mp.charName = "Better Maple";
//     mp.att = 10;
//     mp.def = 10;
//     mp.hp = 100;
//     
//     mp.print();
//
//     mp2.charName = "Better Maple 2";
//     mp2.att = 20;
//     mp2.def = 20;
//     mp2.hp = 100;
//
//     mp2.print();
// }

class Maple
{
public: // Keyword to make accessible from outside
    string charName;
    int att;
    int def;
    int hp;

    void print() // Function to print character details
    {
        cout << charName << endl; // Output character name
        cout << att << endl;       // Output attack value
        cout << hp << endl;        // Output health points
    }
};

void main()
{
    Maple pm; // Object of Maple class

    pm.charName = "Maple User"; // Set character name
    pm.att = 10;                 // Set attack value
    pm.def = 10;                 // Set defense value
    pm.hp = 100;                 // Set health points
    pm.print();                  // Call the print function to display character details
}
