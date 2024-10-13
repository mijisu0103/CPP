#include <iostream>
using namespace std;

class Player
{
private:
    string name; // Private member variable for player name
    int att;     // Private member variable for attack power
    int def;     // Private member variable for defense power

public:
    void SetAtt(int _att); // Set function to modify attack power
    void SetDef(int _def); // Set function to modify defense power
    void SetNam(string _name); // Set function to modify player name
    int GetAtt(); // Get function to retrieve attack power
    void Render(); // Function to display player information

public:
    Player(); // Constructor
    ~Player(); // Destructor
};

// Definition of the SetAtt function
void Player::SetAtt(int _att)
{
    att = _att; // Set attack power
}

// Definition of the SetDef function
void Player::SetDef(int _def)
{
    def = _def; // Set defense power
}

// Definition of the SetNam function
void Player::SetNam(string _name)
{
    name = _name; // Set player name
}

// Definition of the GetAtt function
int Player::GetAtt()
{
    return att; // Return attack power
}

// Definition of the Render function
void Player::Render()
{
    cout << "Player Name: " << name << endl; // Output player name
    cout << "Attack Power: " << att << endl; // Output attack power
    cout << "Defense Power: " << def << endl; // Output defense power
}

// Constructor definition
Player::Player()
{
    name = "Hong Gildong"; // Default name
    att = 10;              // Default attack power
    def = 10;              // Default defense power
}

// Destructor definition
Player::~Player()
{
    // Cleanup code (if needed) can go here
}

void main()
{
    Player p; // Create a Player object

    p.SetAtt(50); // Set attack power to 50
    p.SetDef(50); // Set defense power to 50
    p.SetNam("J"); // Set player name to "J"

    // p.Render(); // Uncomment to display player information

    cout << "Attack Power: " << p.GetAtt() << endl; // Output attack power
}
