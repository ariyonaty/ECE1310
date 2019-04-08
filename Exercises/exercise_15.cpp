/*
    Ari Yonaty
    ECE 1310
    1.24.2019
    Exercise 15: Odd or even
*/

#include <iostream>

using namespace std;

int main()
{
    int n1;

    cout << "Enter a number: ";
    cin >> n1;

    if (n1 % 2 == 0)
    {
        cout << n1 << " is even.\n";
    }
    else
    {
        cout << n1 << " is odd.\n";
    }
    return 0;
}