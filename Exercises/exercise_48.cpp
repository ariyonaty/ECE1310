/*
    Ari Yonaty
    ECE 1310
    2.26.2019
    Exercise 48: srand
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
using std::time;

int main()
{
    int j;
    cout << "Enter seed num: ";
    cin >> j;
    srand(j);

    while (1)
    {
        cout << "Dice roll:\n";

        int dice1 = ((rand() % 6) + 1);
        int dice2 = ((rand() % 6) + 1);

        cout << dice1 << ", " << dice2 << "\n";
        cout << "Press 'q' to exit. Press Enter to continue.";

        char ch = fgetc(stdin);

        if (ch == 113)
        {
            break;
        }
    }
}