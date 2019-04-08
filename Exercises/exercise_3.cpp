/*
    Ari Yonaty
    ECE 1310
    1.23.2019
    Exercise 3: cin & cout; user input
*/

#include <iostream>

using namespace std;

int main()
{
    int i;
    char first[80];
    char last[80];

    cout << "What's your first name? ";
    cin >> first;
    cout << "Hi " << first << "! How about your last name? ";
    cin >> last;
    cout << "How old are you? ";
    cin >> i;
    cout << "Nice to meet you " << first << "!\n";

    return 0;
}