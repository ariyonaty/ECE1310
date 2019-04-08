/*
    Ari Yonaty
    ECE 1310
    2.7.2019
    Exercise 33: Summa 
*/

#include <iostream>

using namespace std;

int main()
{
    int sum = 0, multiply = 1, summa = 0;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            for (int k = 1; k <= j; k++)
            {
                sum += k;
            }
        }
    }

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            multiply *= j;
            summa += multiply;
        }
    }

    cout << sum << "\n";
    cout << summa << "\n";
}
