/* 
    Ari Yonaty
    ECE 1310
    4.18.2019
    Exercise 108: Strings 4 - First and Last Name
 */

#include <iostream>
#include <cstring>

int main()
{
    char first[20], last[20];

    std::cout << "Enter first name: ";
    std::cin.getline(first, 20);
    std::cout << "Enter last name: ";
    std::cin.getline(last, 20);

    std::cout << last << ", " << first << std::endl;

    return 0;
}