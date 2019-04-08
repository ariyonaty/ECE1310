/*
    Ari Yonaty
    ECE 1310
    1.24.2019
    Exercise 16: Multiples 
*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;

    if (num2 % num1 == 0)
    {
        cout << num1 << " is a multiple of " << num2 << ".\n";
    }
    else
    {
        cout << "Not a multiple.\n";
    }

    return 0;
}