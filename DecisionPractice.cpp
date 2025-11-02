#include <iostream>
using namespace std;

int main()
{
    int grade;
    int courseCode;

    cout << "Enter your grade (0-100): ";
    cin >> grade;

    cout << "Enter course code (1,2,3): ";
    cin >> courseCode;

    if (grade >= 75)
    {
        cout << "Result: Pass\n";
    }
    else if (grade >= 0)
    {
        cout << "Result: Fail\n";
    }
    else
    {
        cout << "Result: Invalid grade entered\n";
    }

    cout << "Course: ";
    switch (courseCode)
    {
    case 1:
        cout << "Introduction to Programming\n";
        break;
    case 2:
        cout << "Data Structures\n";
        break;
    case 3:
        cout << "Algorithms\n";
        break;
    default:
        cout << "Invalid course code\n";
    }
    return 0;
}
