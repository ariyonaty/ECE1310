/*
    Ari Yonaty
    ECE 1310
    1.31.2019
    Exercise 24: Ticket Pricing
*/

#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age <= 12)
    {
        cout << "Ticket price is $5.00\n";
    }
    else if (age > 12 && age <= 18)
    {
        cout << "Ticket price is $7.00\n";
    }
    else if (age > 18 && age <= 55)
    {
        cout << "Ticket price is $15.00\n";
    }
    else
    {
        cout << "Ticket price is $10.00\n";
    }
}