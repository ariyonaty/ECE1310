/*
    Ari Yonaty
    ECE 1310
    2.17.2019
    Exercise 42: Pythagorean Theorem
*/

#include <iostream>
#include "math.h"

using namespace std;

int main()
{
    double leg1, leg2;
    cout << "Enter first leg: ";
    cin >> leg1;
    cout << "Enter second leg: ";
    cin >> leg2;

    leg1 = pow(leg1, 2);
    leg2 = pow(leg2, 2);

    cout << "The hypotenuse of your triangle is: " << sqrt(leg1 + leg2) << "\n";
}