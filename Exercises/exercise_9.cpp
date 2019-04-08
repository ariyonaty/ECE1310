/*
    Ari Yonaty
    ECE 1310
    1.24.2019
    Exercise 9: Circle Calculator
*/

#include <iostream>

using namespace std;

int main()
{
    double pi = 3.14159;
    double radius;

    cout << "Radius: ";
    cin >> radius;
    cout << "Diameter: \t" << (radius * 2) << "\n";
    cout << "Circumference: \t" << (2 * pi * radius) << "\n";
    cout << "Area: \t\t" << (pi * radius * radius) << "\n";
}