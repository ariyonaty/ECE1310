/*
    Ari Yonaty
    ECE 1310
    2.7.2019
    Exercise 32: Fibonacci
*/

#include <iostream>

using namespace std;

int main()
{
    int n1 = 0, n2 = 1, n3;

    cout << n1;

    for (int i = 1; i < 20; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << ", " << n1;
    }
    cout << "\n";

    return 0;
}