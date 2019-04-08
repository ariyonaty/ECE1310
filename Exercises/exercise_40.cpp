/*
    Ari Yonaty
    ECE 1310
    2.14.2019
    Exercise 40: Switch Uppercase
*/

#include <iostream>

using namespace std;

int main()
{
    char letter;
    cout << "Enter a character: ";
    cin >> letter;

    switch (letter)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        cout << "Letter is a vowel.\n";
        break;

    default:
        cout << "Letter is a consonant.\n";
        break;
    }

    return 0;
}