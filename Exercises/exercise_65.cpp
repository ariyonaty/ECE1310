/* 
    Ari Yonaty
    ECE 1310
    3.5.2019
    Exercise 65: Function Overload - Square
*/

#include <iostream>

using namespace std;

int square(int x);
double square(double x);

int main()
{
    double x;
    cout << "Enter number: ";
    cin >> x;
    cout << x << " squared: " << square(x) << "\n";

    return 0;
}

int square(int x)
{
    return (x * x);
}

double square(double x)
{
    return (x * x);
}