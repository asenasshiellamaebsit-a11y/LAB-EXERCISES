#include <iostream>
using namespace std;

int main()
{
    int grade;
    cout << "Enter your grade: ";
    cin >> grade;

    if (grade >= 0 && grade <= 100)
    {
        if (grade >= 90)
        {
            cout << "Excellent\n";
        }
        else
        {
            if (grade >= 80)
            {
                cout << "Very Good\n";
            }
            else
            {
                if (grade >= 75)
                {
                    cout << "Satisfactory\n";
                }
                else
                {
                    cout << "Fail\n";
                }
            }
        }
    }
    else
    {
        cout << "Invalid grade entered. Please enter a value between 0 and 100.\n";
    }

    return 0;
}
