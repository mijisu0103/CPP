#include <iostream>
#include <iomanip>

using namespace std;

void main()
{
	bool bn = true;

	if (bn)
	{
		cout << "TRUE";
	}
	else
	{
		cout << "FALSE";
	}


	bool bn = false;

	if (bn)
	{
		cout << "TRUE";
	}
	else
	{
		cout << "FALSE";
	}


	bool bn = false;

	if (bn)
		cout << 10;
	else
		cout << -10;


	char a, b;

	a = 'A';
	b = 65;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	char a; 
  // -128~127 1 byte
	// 1 byte = 8 bits
	unsigned char b;
	a = 127;
	b = 129;
	cout << "a = " << (int)a << endl;
	cout << "b = " << (int)b << endl;


	char upper_ch, lower_ch;
	cout << "Enter an uppercase letter: ";
	cin >> upper_ch;

	// Write a program to convert uppercase to lowercase.
	lower_ch = upper_ch + 32;


	cout << "upper_ch = " << upper_ch << endl;
	cout << "lower_ch = " << lower_ch << endl;


	char a = 'A';
	float b = 1.23F;
	
	cout << "a = " << a <<endl;
	cout << "b = " << b << endl;

	float f = 1.1f;
	double d = 1.1;

	cout << "f = " << f << endl;
	cout << "d = " << d;

	float f = 123.456789f;
	double d = 1.23456789E2;

	cout << "f = " << f << endl;
	cout << "d = " << d << endl;

	//When a user enters a radius, calculate the area and circumference of the circle + display up to the 2nd decimal place.
	float pi, radius, circum, area;
	pi = 3.141592;

	cout << "Enter the radius of the circle: " << endl;
	cin >> radius;

	circum = 2 * pi * radius;
	area = pi * radius * radius;

	cout.precision(2);
	cout << fixed;

	cout << "The circumference of the circle is: " << circum << endl;
	cout << "The area of the circle is: " << area << endl;

}
