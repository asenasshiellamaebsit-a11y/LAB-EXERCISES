#include <iostream>
using namespace std;

int main()
{
    const double PI = 3.141592653589793;
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Menu:\n";
    cout << " 1. Compute Area of Circle\n";
    cout << " 2. Compute Area of Rectangle\n";
    cout << " 3. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        double radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        double area = PI * radius * radius;
        cout << "Area of the circle is: " << area << "\n";
        break;
    }
    case 2:
    {
        double length, width;
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        double area = length * width;
        cout << "Area of the rectangle is: " << area << "\n";
        break;
    }
    case 3:
        cout << "Goodbye!\n";
        break;
    default:
        cout << "Invalid choice.\n";
    }

    return 0;
}
