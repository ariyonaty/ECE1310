/*
    Ari Yonaty
    ECE 1310
    1.24.2019
    Exercise 12: Grade pass or fail using conditionals 
*/

#include <iostream>

using namespace std;

int main()
{
    int test;

    cout << "Enter test score: ";
    cin >> test;

    if (test >= 60)
    {
        cout << "\nYou've passed!\n";

        if (test >= 60 && test < 70)
        {
            cout << "Grade:\tD\n";
        }
        if (test >= 70 && test < 80)
        {
            cout << "Grade:\tC\n";
        }
        if (test >= 80 && test < 90)
        {
            cout << "Grade:\tB\n";
        }
        if (test >= 90)
        {
            cout << "Grade:\tA\n";
        }
    }
    else
    {
        cout << "\nYou've failed!\nGrade:\tF\n";
    }
    return 0;
}