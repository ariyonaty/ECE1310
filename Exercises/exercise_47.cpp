/*
    Ari Yonaty
    ECE 1310
    2.26.2019
    Exercise 47: Coin Programs Randomness
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int heads = 0, tails = 0, count;

    cout << "Enter number of coin flips: ";
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int coin = rand() % 2;
        if (coin == 1)
        {
            heads += 1;
        }
        else
        {
            tails += 1;
        }
    }
    cout << "Coin flipped " << count << " times.\n";
    cout << "# of Heads: " << heads << '\n';
    cout << "# of Tails: " << tails << '\n';
}