/*
    Ari Yonaty
    ECE 1310
    1.24.2019
    Exercise 18: Divisible by 2 and 3
*/

#include <iostream>

using namespace std;

int main()
{
    int input;

    cout << "Enter a number: ";
    cin >> input;

    if (input % 3 == 0 && input % 2 == 0)
    {
        cout << input << " is divisible.\n";
    }
    else
    {
        cout << input << " is not divisible.\n";
    }

    return 0;
}