/*
    Ari Yonaty
    ECE 1310
    1.24.2019
    Exercise 13: Integer comparison
*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, larger;

    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;

    if (num1 > num2)
    {
        larger = num1;
        cout << num1 << " is the larger number.\n";
    }
    else
    {
        larger = num2;
        cout << larger << " is the larger number.\n";
    }
    return 0;
}