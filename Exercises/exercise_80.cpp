/* 
    Ari Yonaty
    ECE 1310
    3.18.2019
    Exercise 80: Shift Right
*/

#include <iostream>

int main()
{
    unsigned int a = 0x0000FFFF;
    std::cout << "Before Shift: " << std::hex << "\t" << a << "\n";
    a = a >> 1; // shift one bit
    std::cout << "After Shift: " << std::hex << "\t" << a << "\n";

        return 0;
}