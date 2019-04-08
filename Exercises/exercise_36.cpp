/*
    Ari Yonaty
    ECE 1310
    2.10.2019
    Exercise 36: Product of odds 
*/

#include <iostream>

using namespace std;

int main()
{
    int k = 1, i = 1;

    do
    {
        if (i % 2 != 0)
        {
            k *= i;
        }
        i++;
    } while (i <= 15);

    cout << "Product of odd numbers in range [0,15]: " << k << "\n";
}