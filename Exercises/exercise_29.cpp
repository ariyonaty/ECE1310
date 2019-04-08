/*
    Ari Yonaty
    ECE 1310
    2.6.2019
    Exercise 29: Square and Cubes
*/

#include <iostream>

using namespace std;

int main()
{
    int i = 0;

    cout << "Squares and cubes for range of 0 to 10.\n";
    cout << "Integer \tSquare \t\tCube\n";

    while (i <= 10)
    {
        cout << i << "\t\t" << i * i << "\t\t" << i * i * i << "\n";
        i++;
    }

    return 0;
}