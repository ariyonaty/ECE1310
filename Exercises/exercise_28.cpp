/*
    Ari Yonaty
    ECE 1310
    1.31.2019
    Exercise 28: Sum of 1 to 10 
*/

#include <iostream>

using namespace std;

int main()
{
    int i = 1, sum = 0;

    while (i <= 10)
    {
        sum += i;
        i++;
    }

    cout << "Sum of numbers 1 -> 10: " << sum << "\n";

    return 0;
}