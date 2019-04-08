/* 
    Ari Yonaty
    ECE 1310
    3.3.2019
    Exercise 57: Pow()
*/

#include <iostream>

using namespace std;

double integerPower(int base, int exponent);

int main()
{
    int base, exponent;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponenet: ";
    cin >> exponent;

    double power = integerPower(base, exponent);
    cout << base << " to the power of " << exponent << " is " << power << "\n";

    return 0;
}

double integerPower(int base, int exponent)
{
    int startingExponent = 1;
    int newBase = base;

    while (startingExponent < exponent)
    {
        newBase = newBase * base;
        startingExponent++;
    }
    return newBase;
}
