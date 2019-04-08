/* 
    Ari Yonaty
    ECE 1310
    3.7.2019
    Exercise 68: factorial with recursion
*/

#include <iostream>

using namespace std;

int S(int);

int main()
{
    cout << "Factorial of 5: "
         << S(5) << "\n";
    return 0;
}

int S(int i)
{
    int n = 0;
    if (i == 1)
    {
        n = 1;
    }
    else
    {
        n = i * S(i - 1);
    }
    return n;
}