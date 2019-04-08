/*
    Ari Yonaty
    ECE 1310
    1.24.2019
    Exercise 18: Input within range
*/

#include <iostream>

using namespace std;

int main()
{
    int input;

    cout << "Enter a number: ";
    cin >> input;

    if (input >= 3 && input <= 10)
    {
        cout << input << " is within range.\n";
    }
    else
    {
        cout << input << " is not in range.\n";
    }

    return 0;
}