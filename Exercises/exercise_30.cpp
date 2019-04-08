/*
    Ari Yonaty
    ECE 1310
    2.7.2019
    Exercise 30: Sum 1 thru 20 
*/

#include <iostream>

using namespace std;

int main()
{
    int k = 0;

    for (int i = 1; i <= 20; i++)
    {
        k += i;
    }

    cout << "Sum of 1 -> 20: " << k << "\n";
}