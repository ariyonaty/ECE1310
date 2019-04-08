/* 
    Ari Yonaty
    ECE 1310 
    3.12.2019
    Exercise 72: Summation with recursion
*/

#include <iostream>

using namespace std;

int S(int);

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Summation of " << num << " is: "
         << S(num) << "\n";
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
        n = i + S(i - 1);
    }
    return n;
}