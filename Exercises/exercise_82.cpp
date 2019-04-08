/* 
    Ari Yonaty
    ECE 1310
    3.19.2019
    Exercise 82: Bitwise Increase Positive
 */

#include <iostream>
#include <iomanip>

int main()
{
    int num, x = 1;

    std::cout << "Enter num: ";
    std::cin >> num;

    std::cout << "Binary Representation: " << std::bitset<8>(num) << std::endl;

    // Checks if while evaluate to true: if there is any AND combination
    while (num & x)
    {
        num = num ^ x; // XOR sets num
        x <<= 1;       // Shift left x (+1)
        std::cout << "Binary Representation (Shift): " << std::bitset<8>(num) << std::endl;
    }

    // XOR on final num with shifted x
    num = num ^ x;

    std::cout << "Binary Representation: " << std::bitset<8>(num) << std::endl;
    std::cout << "Number + 1 using bitwise operators: " << num << std::endl;
}