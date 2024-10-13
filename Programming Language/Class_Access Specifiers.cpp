#include <iostream>
using namespace std;

class Student
{
private: // Accessible only within the class
    int number; // Student number
    string name; // Student name
    int kor; // Korean score
    int eng; // English score
    int mat; // Math score

    // In classes, declare variables and usually initialize them in functions.

public:
    void init(); // Function to initialize student data
    void showData(); // Function to display student data
};

// Definition of the init function to set initial values
void Student::init()
{
    number = 1001; // Set student number
    name = "Hong Gildong"; // Set name
    kor = 100; // Set Korean score
    eng = 90; // Set English score
    mat = 95; // Set Math score
}

// Definition of the showData function to display student information
void Student::showData()
{
    cout << "Student Number: " << number << endl; // Output student number
    cout << "Name: " << name << endl; // Output name
    cout << "Korean: " << kor << endl; // Output Korean score
    cout << "English: " << eng << endl; // Output English score
    cout << "Math: " << mat << endl; // Output Math score
}

void main()
{
    Student kim; // Create a Student object

    kim.init(); // Initialize the student data
    kim.showData(); // Display the student data
}
