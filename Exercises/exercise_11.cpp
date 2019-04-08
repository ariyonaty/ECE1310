/*
    Ari Yonaty
    ECE 1310
    1.24.2019
    Exercise 11: Conditionals 
*/

#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cout << "\n Enter first number: ";
    cin >> n1;
    cout << "\n Enter second number: ";
    cin >> n2;

    if (n1 == n2)
    {
        cout << "\n Numbers are the same. \n";
    }
    else
    {
        cout << "\n Numbers are different.\n";
    }

    return 0;
}