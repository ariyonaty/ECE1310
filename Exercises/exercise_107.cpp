/* 
    Ari Yonaty
    ECE 1310
    4.18.2019
    Exercise 106: Strings 3
 */

#include <iostream>
#include <cstring>

int main()
{
    char s1[20], s2[20];

    std::cout << "Enter string 1: ";
    std::cin.getline(s1, 20);

    std::cout << "Enter string 2: ";
    std::cin.getline(s2, 20);

    std::cout << s1 << ", " << s2 << std::endl;

    return 0;
}