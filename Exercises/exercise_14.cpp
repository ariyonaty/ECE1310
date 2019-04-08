/*
    Ari Yonaty
    ECE 1310
    1.24.2019
    Exercise 14: Integer comparison
*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, larger;

    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;
    cout << "Enter another number: ";
    cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        larger = num1;
        cout << larger << " is the larger number.\n";
    }
    if (num2 > num1 && num2 > num3)
    {
        larger = num2;
        cout << larger << " is the larger number.\n";
    }
    if (num3 > num1 && num3 > num2)
    {
        larger = num3;
        cout << larger << " is the larger number.\n";
    }

    return 0;
}