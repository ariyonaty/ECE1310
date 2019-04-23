/* 
    Ari Yonaty
    ECE 1310
    4.18.2019
    Exercise 106: Strings 2
 */

#include <iostream>

int main()
{
    char myStr[20] = "Hi there.\n";
    std::cout << myStr;

    for (int i = 0; i < 20; i++)
    {
        std::cout << myStr[i] << " ";
    }

    return 0;
}