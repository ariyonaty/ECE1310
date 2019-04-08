/* 
    Ari Yonaty
    ECE 1310
    3.12.2019
    Exercise 70: 
*/

#include <iostream>

using namespace std;

int f(int i);

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << f(num) << "\n";

    return 0;
}

int f(int i)
{
    if (i == 0)
    {
        return -1;
    }
    else if (i == 1)
    {
        return 2;
    }
    else
    {
        return (f(i - 1) + 3) * (f(i - 2));
    }
}