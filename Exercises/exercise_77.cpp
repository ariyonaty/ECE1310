/* 
    Ari Yonaty
    ECE 1310
    3.18.2019
    Exercise 77: Print in Hex
 */

#include <iostream>

int main()
{
    unsigned int a = 0xFFFFFFFF;

    std::cout << std::hex << a << "\n";
    a = ~a;
    std::cout << std::hex << a << "\n";

    return 0;
}