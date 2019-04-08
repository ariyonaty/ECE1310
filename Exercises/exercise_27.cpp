/*
    Ari Yonaty
    ECE 1310
    1.31.2019
    Exercise 27: Fibonnaci 
*/

#include <iostream>

using namespace std;

int main()
{
    int i = 1, x = 0, y = 1, z;

    cout << x;

    while (i < 20)
    {
        cout << ", " << y;
        z = x + y;
        x = y;
        y = z;
        i++;
    }

    cout << "\n";

    return 0;
}