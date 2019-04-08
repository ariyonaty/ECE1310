/*
    Ari Yonaty
    ECE 1310
    1.24.2019
    Exercise 10: Casting. Returns the integer value of char
*/

#include <iostream>

using namespace std;

int main()
{
    char x;

    cin >> x;
    cout << '\n'
         << x << '\n';
    cout << static_cast<int>(x) << '\n';

    return 0;
}
