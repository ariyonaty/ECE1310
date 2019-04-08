/*
    Ari Yonaty
    ECE 1310
    1.24.2019
    Exercise 17: Right Triangle Justification
*/

#include <iostream>

using namespace std;

int main()
{
    double num1, num2, num3, larger;

    cout << "Enter value: ";
    cin >> num1;
    cout << "Enter value: ";
    cin >> num2;
    cout << "Enter value: ";
    cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        larger = num1;
        if (num1 * num1 == (num2 * num2) + (num3 * num3))
        {
            cout << "Values can be part of right triangle.\n";
        }
        cout << num1 << " is the larger number.\n";
    }
    if (num2 > num1 && num2 > num3)
    {
        larger = num2;
        if (num2 * num2 == (num1 * num1) + (num3 * num3))
        {
            cout << "Values can be part of right triangle.\n";
        }
        cout << num2 << " is the larger number.\n";
    }
    if (num3 > num1 && num3 > num2)
    {
        larger = num3;
        if (num3 * num3 == (num2 * num2) + (num1 * num1))
        {
            cout << "Values can be part of right triangle.\n";
        }
        cout << num3 << " is the larger number.\n";
    }

    return 0;
}