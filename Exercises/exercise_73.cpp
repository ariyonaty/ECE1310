/* 
    Ari Yonaty
    ECE 1310
    3.13.2019
    Exercise 73: Patterns with Recursion
 */

#include <iostream>

using namespace std;

int pattern(int row);

int main()
{
    pattern(5);

    return 0;
}

int pattern(int row)
{
    if (row == 0)
    {
        return 0;
    }
    else
    {
        for (int i = 1; i <= row; i++)
        {
            cout << "*";
        }
        cout << "\n";
        pattern(row - 1);
        return row;
    }
}