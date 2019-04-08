/* 
    Ari Yonaty
    ECE 1310
    3.3.2019
    Exercise 58: Call by Value
*/

#include <iostream>

using namespace std;

void func(int);

int main()
{
    int i = 1;
    cout << "Before call: i = " << i << "\n";
    func(i);
    cout << "After call: i = " << i << "\n";
}

void func(int k)
{
    for (int i = 1; i <= 10; i++)
    {
        k = k * 2;
        cout << "K is: " << k << "\n";
    }
}