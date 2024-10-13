#include <iostream>
#include <iomanip>
using namespace std;

struct Student
{
    string strname;
    int kor;
    int eng;
    int math;
    int iTotal;
    float fAvg;
};

void main()
{
    Student* tStudent; // Dynamic allocation = allows changing the number of students
    // Student tst[100]; // Static, allocates up to 100

    int iStudentMAX = 0;
    int iStudentNum = 0;

    cout << "Enter the total number of students: " << endl;
    cin >> iStudentMAX;
    tStudent = new Student[iStudentMAX];

    while (true)
    {
        int iInput = 0;
        system("cls");
        cout << "======================" << endl;
        cout << "1. Add student grades " << endl;
        cout << "2. View all grades " << endl;
        cout << "3. Exit the program  " << endl;
        cout << "Please enter a number: ";
        cin >> iInput;

        switch (iInput)
        {
            case 1:
            {
                if (iStudentMAX == iStudentNum)
                {
                    cout << "Cannot enter more data." << endl;
                    break;
                }

                cout << "Name: ";
                cin >> tStudent[iStudentNum].strname;
                cout << "Korean: ";
                cin >> tStudent[iStudentNum].kor;
                cout << "English: ";
                cin >> tStudent[iStudentNum].eng;
                cout << "Math: ";
                cin >> tStudent[iStudentNum].math;

                tStudent[iStudentNum].fAvg = (tStudent[iStudentNum].kor
                    + tStudent[iStudentNum].eng + tStudent[iStudentNum].math) / 3;

                iStudentNum++;
                cout << "Data has been entered." << endl;

                system("pause");
            }
            break;
            case 2:
            {
                // Output
                cout << "\n <View All Grades> \n";
                cout << "Name  Korean  English  Math" << endl;

                for (int i = 0; i < iStudentNum; i++)
                {
                    cout << setw(6) << tStudent[i].strname;
                    cout << setw(6) << tStudent[i].kor;
                    cout << setw(6) << tStudent[i].eng;
                    cout << setw(6) << tStudent[i].math;
                    cout << endl;
                }
                system("pause");
            }
            break;
            case 3:
                return;
                break;
        }
    }
}
