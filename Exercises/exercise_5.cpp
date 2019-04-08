/*
    Ari Yonaty
    ECE 1310
    1.24.2019
    Exercise 5: Arithmetic operators
*/

#include <iostream>

using namespace std;

int main()
{
    int a = 3, b = 4, c = 5, x, y;

    cout << "Input value for x: ";
    cin >> x;

    y = (a * x * x) + (b * x) + c;
    cout << "Value for y is: " << y << "\n";
}
