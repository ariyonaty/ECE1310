/*
    Ari Yonaty
    ECE 1310
    2.17.2019
    Exercise 41: floor() and ceil()
*/

#include <iostream>
#include "math.h"

using namespace std;

int main()
{
    double x;
    cout << "Enter a double value: ";
    cin >> x;
    double flr = floor(x);
    double cl = ceil(x);

    cout << "Floor function: " << flr << "\n";
    cout << "Ceil function: " << cl << "\n";

    if (flr == cl)
    {
        cout << "Number is whole.\n";
    }
}