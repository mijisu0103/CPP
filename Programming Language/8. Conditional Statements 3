#include <iostream>
#include <Windows.h>

using namespace std;

void main()
{
	// Get a character input
	// Search for that character in the string
	// Print the position of the character

	char str[8] = "hiworld";
	char ch;

	cout << "Enter a character: ";
	cin >> ch;

	for (int i = 0; i < 8; i++)
	{
		if (ch == str[i])
		{
			cout << "Character found at position: " << i + 1 << endl;
			break;
		}
	}

	string str = "hiworld";
	char ch;

	cout << "Enter a character: " << endl;
	cin >> ch;

	cout << str.find(ch) + 1 << endl;

	// Initializing strings
	string str1 = "str1";
	string str2("str2");
	string str3;
	str3 = "Hi";

	// Dynamic allocation
	string* pstr5 = new string("str5");
	delete pstr5;

	string sentence;
	sentence = "C++ coding is very easy.";

	cout << sentence.length() << endl;

	string str = "apple";

	int cnt = 0;
	while (true)
	{
		cout << str[(cnt++) % 5] << endl;
		Sleep(1000);
	}

	// Dungeon key example
	string DeunjunKey = "OpenSesame";
	string answer;

	cout << "You have arrived at the dungeon." << endl;
	cout << "It says you must say the password to open the door." << endl;
	cout << "Enter the password: " << endl;
	cin >> answer;

	if (DeunjunKey == answer) // if(DeunjunKey.compare(answer)) to avoid issues with spaces.
	{
	    cout << "The dungeon door opens." << endl;
	    cout << "A red dragon appears, and you are hit." << endl;
	}
	else
	{
	    cout << "The password is incorrect." << endl;
	    cout << "An arrow flies from somewhere and hits you." << endl;
	}

	// Switch case example
	Enter a number from 1 to 9
	Use switch statement to determine if it's odd or even
	
	int a;

	cout << "Enter a number from 1 to 9: ";
	cin >> a;

	switch (a)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
			cout << a << " is odd." << endl;
			break;
		case 2:
		case 4:
		case 6:
		case 8:
			cout << a << " is even." << endl;
			break;
	}

	// Another way to check odd/even
	int a;

	cout << "Enter a number from 1 to 9: ";
	cin >> a;

	switch (a % 2)
	{
		case 0:
			cout << a << " is even." << endl;
			break;
		case 1:
			cout << a << " is odd." << endl;
			break;
	}
}
