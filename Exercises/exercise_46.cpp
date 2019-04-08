/*
    Ari Yonaty
    ECE 1310
    2.26.2019
    Exercise 46: Rolling Dice Continuously
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    while (1)
    {
        cout << "Dice roll:\n";
        int dice1 = (1 + (rand() % 6));
        int dice2 = (1 + (rand() % 6));
        cout << dice1 << ", " << dice2 << "\n";
        cout << "Press 'q' to exit. Press Enter to continue.";
        char ch = fgetc(stdin);

        if (ch == 113)
        {
            break;
        }
    }
}