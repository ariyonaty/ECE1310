/*
    Ari Yonaty
    ECE 1310
    1.23.2019
    Exercise 2: cin and cout 
*/

#include <iostream>

using namespace std;

int main()
{
    char str[80];
    int i;

    cout << "Enter your name: ";
    cin >> str;
    cout << "Enter your age: ";
    cin >> i;

    cout << str << " is " << i << " years old.\n";
    return 0;
}