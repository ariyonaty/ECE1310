/* 
    Ari Yonaty
    ECE 1310
    3.14.2019
    Exercise 75: LCM
 */

#include <iostream>

using namespace std;

int lcm(int a, int b);
int gcdEuclid(int m, int n);

int main()
{
    int m, n;

    cout << "Enter value for m(larger): ";
    cin >> m;
    cout << "Enter value for n(smaller): ";
    cin >> n;

    cout << "Least Common Multiple: " << lcm(m, n) << "\n";

    return 0;
}

int lcm(int a, int b)
{
    return ((a * b) / (gcdEuclid(a, b)));
}

int gcdEuclid(int m, int n)
{
    if (m % n == 0)
    {
        return n;
    }
    else
    {
        return gcdEuclid(n, m % n);
    }
}