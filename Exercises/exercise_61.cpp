/* 
    Ari Yonaty
    ECE 1310
    3.3.2019
    Exercise 61: Factorial - Call by Reference
*/

#include <iostream>

using namespace std;

int factorial(int &num);

int main()
{
    int n;
    cout << "Enter factorial: ";
    cin >> n;

    cout << "Before call: n = " << n << "\n";
    factorial(n);
    cout << "After call: n = " << n << "\n";
    cout << n << "\n";
}

int factorial(int &num)
{
    int i = 1, counter = 1;
    while (i <= num)
    {
        counter *= i;
        ++i;
    }
    num = counter;
    return num;
}