/*
    Ari Yonaty
    ECE 1310
    2.17.2019
    Exercise 45: Rolling Dice
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    cout << "Dice roll:\n";
    int dice1 = ((rand() % 6) + 1);
    int dice2 = ((rand() % 6) + 1);
    cout << dice1 << ", " << dice2 << "\n";
}