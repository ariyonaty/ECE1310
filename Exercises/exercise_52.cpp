/*
    Ari Yonaty
    ECE 1310
    2.26.2019
    Exercise 52: Functions - AskForAge - Global
*/

#include <iostream>

using namespace std;

int age;
int AskForAge();

int main()
{
    cout << "Asking for age...\n";
    age = AskForAge();
    cout << age << '\n';
    return 0;
}

int AskForAge()
{
    cout << "How old are you? -> ";
    cin >> age;
    return age;
}