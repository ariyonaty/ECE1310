/*
    Ari Yonaty
    ECE 1310
    2.28.2019
    Exercise 54: Addition
*/

#include <iostream>

using namespace std;

int myAddition(int first, int second);

int main()
{
    int first, second;
    cout << "Enter first #: ";
    cin >> first;
    cout << "Enter second #: ";
    cin >> second;

    int sum = myAddition(first, second);
    cout << "Sum is: " << sum << "\n";
}

int myAddition(int first, int second)
{
    return (first + second);
}
