/* 
    Ari Yonaty
    ECE 1310
    3.13.2019
    Exercise 71: Pow using recursion
*/

#include <iostream>

using namespace std;

int power(int base, int exponent);

int main()
{
    int base, exponent;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    cout << base << " to the power of " << exponent << " is " << power(base, exponent) << "\n";
}

int power(int base, int exponent)
{
    int newBase = base;
    if (exponent == 1)
    {
        return newBase;
    }
    else
    {
        newBase = base * power(base, exponent - 1);
    }
    return newBase;
}