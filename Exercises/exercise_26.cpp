/*
    Ari Yonaty
    ECE 1310
    1.31.2019
    Exercise 26: Power 
*/

#include <iostream>

using namespace std;

int main()
{
    int power = 20;
    int i = 1;
    int num = 2;

    while (i <= power)
    {
        cout << "2 to the power of " << i << " is " << num << "\n";
        num = num * 2;
        i++;
    }

    return 0;
}