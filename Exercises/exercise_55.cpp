/* 
    Ari Yonaty
    ECE 1310
    2.28.2019
    Exercise 55: Fibonacci
*/

#include <iostream>

using namespace std;

int myAddition(int first, int second);

int main()
{
    int first = 1, second = 1;
    cout << first << ", " << second;
    for (int i = 1; i <= 10; i++)
    {
        int third = myAddition(first, second);
        cout << ", " << third;
        first = second;
        second = third;
    }
    cout << '\n';
}

int myAddition(int first, int second)
{
    return (first + second);
}
