/* 
    Ari Yonaty
    ECE 1310
    3.18.2019
    Exercise 78: Binary Operators
*/

#include <iostream>
#include <iomanip>

int main()
{
    unsigned int a = 0x0000FFFF;
    unsigned int b = 0x22221111;
    unsigned int c = 0x00000000;

    std::cout << "a: " << std::hex << std::setfill('0') << std::setw(8) << a << std::endl;
    std::cout << "b: " << std::hex << std::setfill('0') << std::setw(8) << b << std::endl;

    // Binary AND Operator copies a bit to the result if it exists in both operands.
    c = a & b;
    std::cout << "AND: \t" << std::hex << std::setfill('0') << std::setw(8) << c << "\n";

    // Binary OR Operator copies a bit if it exists in either operand.
    c = a | b;
    std::cout << "OR: \t" << std::hex << std::setfill('0') << std::setw(8) << c << "\n";

    // Binary XOR Operator copies the bit if it is set in one operand but not both.
    c = a ^ b;
    std::cout << "XOR: \t" << std::hex << std::setfill('0') << std::setw(8) << c << "\n";

    return 0;
}