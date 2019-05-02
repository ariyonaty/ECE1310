/* 
    Ari Yonaty
    ECE 1310
    4.25.2019
    Exercise 114: Check string for palidrome.
 */

#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    bool palindrome = false;
    std::string str, reverseStr;
    std::cout << "Enter string: ";
    std::cin >> str;
    reverseStr = str;

    int length = str.length();
    std::reverse(reverseStr.begin(), reverseStr.end());

    if (str == reverseStr)
    {
        std::cout << "String is palindrome!\n";
    }
    else
    {
        std::cout << "String isn't palindrome!\n";
    }

    return 0;
}