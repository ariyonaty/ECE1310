/*
    Ari Yonaty
    ECE 1310
    2.14.2019
    Exercise 39: Switch Grades
*/

#include <iostream>

using namespace std;

int main()
{
    int grade;
    cout << "Enter your number grade [0,100]: ";
    cin >> grade;

    switch (grade / 10)
    {
    case 10:
    case 9:
        cout << "Letter grade: A\n";
        break;
    case 8:
        cout << "Letter grade: B\n";
        break;
    case 7:
        cout << "Letter grade: C\n";
        break;
    case 6:
        cout << "Letter grade: D\n";
        break;
    default:
        cout << "Letter grade: F\n";
        break;
    }

    return 0;
}