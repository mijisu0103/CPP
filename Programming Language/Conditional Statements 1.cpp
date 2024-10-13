#include <iostream>
#include <Windows.h>

using namespace std;

void main()
{	
	const char* str[5] = {"Wall", "Lightning", "Attack", "Island", "!"};
	
	// Situation where the monster is attacked
	srand(unsigned(time(NULL)));

	int hp = 10000; // Monster's health points
	int att =  10;  // Regular attack damage
	int creatt = 100; // Critical attack damage
	
	int ran = 0;
	int ran2 = 0;
	// Normal attack
	// 10% chance for a critical attack

	while (true)
	{
		cout << "Attacking..." << endl;
		ran = rand() % 10 + 1; 
		ran2 = rand() % 100 + 1;

		if (ran == 1) // Critical attack
		{
			hp -= creatt;
			cout << "Critical hit! " << creatt << endl;
		}
		else // Regular attack
		{
			hp -= att;
		}

		if (ran2 == 100) // Special attack
		{
			system("cls");
			//cout << "Wall Lightning Attack!" << endl;
			for (int i = 0; i < 5; i++)
			{
				cout << str[i];
				Sleep(1000);
			}
			cout << endl;
			cout << "Wall Lightning Attack!" << endl;
			hp -= 10000; // Special attack damage
		}

		cout << "Current HP: " << hp << endl;
		if (hp <= 0)
		{
			cout << "You have died." << endl;
			break;
		}
		Sleep(500);
	}
}
