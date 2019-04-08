/* 
    Ari Yonaty
    ECE 1310
    3.7.2019
    Exercise 67: Recursive exponential
*/

#include <iostream>

using namespace std;

int recursiveExp(int);

int main()
{
    recursiveExp(10);

    return 0;
}

int recursiveExp(int i)
{
    cout << i << "\n";
    if (i == 0)
    {
        return 0;
    }
    else
    {
        return recursiveExp(i - 1);
    }
}