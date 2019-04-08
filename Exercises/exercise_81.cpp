/* 
    Ari Yonaty
    ECE 1310
    3.19.2019
    Exercise 81: byte stuff
 */

#include <iostream>
#include <iomanip>

int main()
{
    unsigned int num;
    int count = 0;

    std::cout << "Enter num: ";
    std::cin >> num;

    std::cout << "Binary Representation: " << std::bitset<32>(num) << std::endl;

    for (int i = 0; i < 32; i++)
    {
        count += num & 1;
        num >>= 1;
    }
    std::cout << "# of 1s in bitset: " << count << std::endl;
}