/*
    Ari Yonaty
    ECE 1310
    2.14.2019
    Exercise 38: Switch Numbers
*/

#include <iostream>

using namespace std;

int main()
{
    int i;
    cout << "Enter number btwn 0 and 3: ";
    cin >> i;

    switch (i)
    {
    case 0:
        cout << "You've entered 0";
        break;
    case 1:
        cout << "You've entered 1.\n";
        break;
    case 2:
        cout << "You've entered 2.\n";
        break;
    case 3:
        cout << "You've entered 3.\n";
        break;
    default:
        cout << "You're number is not in range.\n";
        break;
    }

    return 0;
}