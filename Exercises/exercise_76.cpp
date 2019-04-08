/* 
    Ari Yonaty
    ECE 1310
    3.18.2019
    Exercise 76: Hex to Dec
*/

#include <iostream>

int main()
{
    unsigned int a = 0x008A;
    unsigned int b = 0xE09C;
    unsigned int c = 0xFFFF;

    std::cout << "a hex: " << std::hex << a << "\ta dec: " << std::dec << a << "\n";
    std::cout << "b hex: " << std::hex << b << "\tb dec: " << std::dec << b << "\n";
    std::cout << "c hex: " << std::hex << c << "\tc dec: " << std::dec << c << "\n";
}