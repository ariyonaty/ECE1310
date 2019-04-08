/*
    Ari Yonaty
    ECE 1310
    1.31.2019
    Exercise 22: Palindrome
*/

#include <iostream>

using namespace std;

int main()
{
    int num, reversed, d1, d2, d3, d4, d5;

    cout << "Enter a 5-digit number: ";
    cin >> num;

    d1 = num % 10;
    d2 = num / 10 % 10;
    d3 = num / 100 % 10;
    d4 = num / 1000 % 10;
    d5 = num / 10000 % 10;

    if (d1 == d5 && d2 == d4)
    {
        cout << num << " is Palindrome.\n";
    }
    else
    {
        cout << num << " isn't Palindrome.\n";
    }
}
