#pragma once
#include <iostream>
using namespace std;

class Player
{
public:
    string JobName; // Public member variable for job name
    int Hp;         // Public member variable for health points
    int att;        // Public member variable for attack power
    int def;        // Public member variable for defense power

public:
    void Input();   // Member function to input player data
    void Output();  // Member function to output player data
};
