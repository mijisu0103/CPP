#include "Player.h"

void Player::Input()
{
    // You can use 'this->' to refer to member variables if needed.
    // Example: this->JobName is equivalent to just JobName.
    cout << "Enter job name: " << endl; // Prompt for job name
    cin >> JobName; // Input job name
    cout << "Enter attack power: " << endl; // Prompt for attack power
    cin >> att; // Input attack power
    cout << "Enter defense power: " << endl; // Prompt for defense power
    cin >> def; // Input defense power
    cout << "Enter health points: " << endl; // Prompt for health points
    cin >> Hp; // Input health points
}

void Player::Output()
{
    // Display player information
    cout << "Job: " << JobName << endl; // Output job name
    cout << "Health Points: " << Hp << endl; // Output health points
    cout << "Attack Power: " << att << endl; // Output attack power
    cout << "Defense Power: " << def << endl; // Output defense power
}
