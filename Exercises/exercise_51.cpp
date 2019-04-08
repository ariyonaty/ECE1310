/*
    Ari Yonaty
    ECE 1310
    2.26.2019
    Exercise 51: Functions - AskForAge
*/

#include <iostream>

using namespace std;

int AskForAge();

int main()
{
    int i;
    cout << "Asking for age...\n";
    i = AskForAge();
    cout << i << '\n';
    return 0;
}

int AskForAge()
{
    int age;
    cout << "How old are you? -> ";
    cin >> age;
    return age;
}