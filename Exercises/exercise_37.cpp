/*
    Ari Yonaty
    ECE 1310
    2.7.2019
    Exercise 37: Fibonacci
*/

#include <iostream>

using namespace std;

int main()
{
    int n1 = 0, n2 = 1, n3, i = 1;

    cout << n1;

    do
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << ", " << n1;
        i++;
    } while (i < 20);
    cout << "\n";
}