#include <iostream>
using namespace std;

class Student
{
public:
    int number; // Member variable for student number
    char name[20]; // Member variable for student name
    int kor; // Member variable for Korean score
    int eng; // Member variable for English score
    int mat; // Member variable for Math score

    void showData(); // Member function to display student data
};

// Definition of the showData member function
void Student::showData()
{
    cout << "Student Number: " << number << endl; // Output student number
    cout << "Name: " << name << endl; // Output student name
    cout << "Korean: " << kor << endl; // Output Korean score
    cout << "English: " << eng << endl; // Output English score
    cout << "Math: " << mat << endl; // Output Math score
}

void main()
{
    // Student kim; // Object declaration (commented out)

    // kim.number = 1001;
    // strcpy_s(kim.name, "Kim Cheolsu"); // Copy name into kim's name
    // kim.kor = 100;
    // kim.eng = 90;
    // kim.mat = 95;

    // kim.showData(); // Display student data (commented out)

    Student* kim = new Student; // Create a new Student object dynamically

    kim->number = 1001; // Set student number
    strcpy_s(kim->name, "Hong Gildong"); // Copy name into kim's name
    kim->kor = 100; // Set Korean score
    kim->eng = 90; // Set English score
    kim->mat = 95; // Set Math score

    kim->showData(); // Display student data
}
