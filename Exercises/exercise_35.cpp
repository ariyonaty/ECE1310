/*
    Ari Yonaty
    ECE 1310
    2.10.2019
    Exercise 35: Sum 1 thru 20 
*/

#include <iostream>

using namespace std;

int main()
{
    int k = 0, i = 0;

    do
    {
        k += i;
        i++;
    } while (i <= 20);

    cout << "Sum of 1 -> 20: " << k << "\n";
}