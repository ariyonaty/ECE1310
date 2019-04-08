/*
    Ari Yonaty
    ECE 1310
    1.31.2019
    Exercise 25: Factorial
*/

#include <iostream>

using namespace std;

int main()
{
    int i = 1, j, k = 1;

    cout << "Enter an integer: ";
    cin >> j;

    while (i <= j)
    {
        k *= i;
        ++i;
    }

    cout << "Factorial of " << j << " is " << k << "\n";

    return 0;
}