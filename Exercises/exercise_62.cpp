/* 
    Ari Yonaty
    ECE 1310
    3.3.2019
    Exercise 62: Smallest Integer
*/

#include <iostream>

using namespace std;

int smallest(int x, int y, int z);

int main()
{
    int x, y, z;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter z: ";
    cin >> z;

    cout << smallest(x, y, z) << " is the smallest number.\n";
}

int smallest(int x, int y, int z)
{
    if (x < y && x < z)
    {
        return x;
    }
    else if (y < x && y < z)
    {
        return y;
    }
    else
    {
        return z;
    }
}
