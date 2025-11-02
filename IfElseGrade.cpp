#include <iostream>
using namespace std;

int main()
{
    int grade;

    cout << " Enter your grade: " << endl;
    cin >> grade;

    if (grade >= 75)
    {
        cout << "Pass" << endl;
        cout << "Congratulations!" << endl;
        cout << "Keep up the good work." << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }

    return 0;
}
