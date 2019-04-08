/*
    Ari Yonaty
    ECE 1310
    1.24.2019
    Exercise 6: Arithmetic Operators
*/

#include <iostream>

using namespace std;

int main()
{
    int a = 5, x, y;

    cout << "Input value for x: ";
    cin >> x;

    y = (a * (x * x * x)) + 7;
    cout << "Value for y is: " << y * 2 << "\n";
}