/*
    Ari Yonaty
    ECE 1310
    2.26.2019
    Exercise 50: Checkpoint
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
using std::time;

int progA();
int progB();
int progC(int m, int n);

int main()
{

    srand(time(NULL));
    int m = progA();
    int n = progB();
    cout << "m: " << m << "\n";
    cout << "n: " << n << "\n";
    progC(m, n);
}

int progA()
{
    return (3 + rand() % (6 - 3 + 1));
}

int progB()
{
    return (1 + rand() % (5 - 1 + 1));
}

int progC(int m, int n)
{
    int sum = 0, mult = 1;

    for (int j = 1; j <= m; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }
        mult *= sum;
    }

    cout << sum;
}