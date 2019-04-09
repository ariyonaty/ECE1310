/* 
    Ari Yonaty
    ECE 1310
    5.9.2019
    Exercise 97: Adding integers using pointers
 */

#include <iostream>

int main()
{
    int i, j, *pI, *pJ;
    std::cout << "Enter two numbers to add: " << std::endl;
    std::cin >> i >> j;

    pI = &i;
    pJ = &j;

    int sum = *pI + *pJ;

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}