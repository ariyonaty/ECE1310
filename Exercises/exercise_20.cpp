/*
    Ari Yonaty
    ECE 1310
    1.24.2019
    Exercise 20: Input within range of input
*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter a number: ";
    cin >> num2;
    cout << "Enter a number: ";
    cin >> num3;

    if (num3 >= num1 && num3 <= num2)
    {
        cout << num3 << " is within range.\n";
    }
    else if (num3 >= num2 && num3 <= num1)
    {
        cout << num3 << " is within range.\n";
    }
    else
    {
        cout << num3 << " is not in range.\n";
    }

    return 0;
}