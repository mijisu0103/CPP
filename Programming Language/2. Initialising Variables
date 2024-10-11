#include <iostream>

using namespace std;

void main()
{
	int a = 0, b = 0;
	cout << "When variables are uninitialized: ";
	cout << "a = " << a << "\t";
	cout << "b = " << b << "\n";
	a = 10;
	b = 20;
	cout << "When variables are initialized: ";
	cout << "a = " << a << "\t";
	cout << "b = " << b << "\n";

	unsigned short a = 32767; // smaller than int. 2 bytes
	// short can hold up to 32767, unsigned can hold up to 65534.
	
 unsigned int b = 2147483647; // 4 bytes - can hold about 2.1 billion
	// This is the limit.
	// By adding unsigned before the type, it means only positive numbers will be used, allowing for a larger range.

	// Stock market program
	// Currency unit over 2.1 billion // might need to use long
	// Thus use double and multiply by a decimal 

	cout << a << endl;
	a = a + 1;
	cout << a << endl;
	cout << b << endl;
	b = b + 1;
	cout << b << endl;

	//  Decimal       Octal         Hexadecimal
	int a = 100, b = 0100, c = 0x100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	// Enter hours, minutes, and seconds.
	// Output the result converted to seconds.
	
	int h, m, s, totalSeconds;
	cout << "Enter hours, minutes, and seconds: ";
	cin >> h >> m >> s;

	totalSeconds = h * 3600 + m * 60 + s;

	cout << "The time you entered can be converted to " << totalSeconds << " seconds.";


	cout << "Size of integer constant: " << sizeof(10) << endl;
	cout << "Size of floating-point constant: " << sizeof(10.5f) << endl; // float, hence the f
	cout << "Size of floating-point constant: " << sizeof(10.5) << endl; // treated as double.

	const char* pch = "This is C++."; // Treating the string as a pointer to memory
	// Because it is passed as a pointer, const char* is used to prevent modification --> cannot be changed.
	char str[10] = "Program";

	// Since str[10] = "Hello" doesn't work, it needs to be done like this:
	strcpy_s(str, "Hello");

	cout << pch << endl;
	cout << str << endl;

	string str = "Hello";
	str = "Changed";
	cout << str << endl;

}
