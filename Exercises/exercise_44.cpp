/*
    Ari Yonaty
    ECE 1310
    2.17.2019
    Exercise 44: Random
*/

#include <iostream>

using namespace std;

int main()
{
    int min, max, numGenerated;

    cout << "Enter min: ";
    cin >> min;
    cout << "Enter max: ";
    cin >> max;
    cout << "Enter amount of numbers to generate: ";
    cin >> numGenerated;

    for (int i = 1; i <= numGenerated; i++)
    {
        cout << rand() % (max + 1 - min) + min << " ";
    }

    cout << "\n";
    return 0;
}