/*
    Ari Yonaty
    ECE 1310
    1.31.2019
    Exercise 31: Product of odds 
*/

#include <iostream>

using namespace std;

int main()
{
    int k = 1;

    for (int i = 1; i <= 15; i++)
    {
        if (i % 2 != 0)
        {
            k *= i;
        }
    }

    cout << "Product of odd numbers in range [0,15]: " << k << "\n";

    return 0;
}