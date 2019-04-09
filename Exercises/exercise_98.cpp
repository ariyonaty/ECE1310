/* 
    Ari Yonaty
    ECE 1310
    4.8.2019
    Exercise 98: Fibonacci with pointers
 */

#include <iostream>

int main()
{
    int num1 = 0, num2 = 1, swap, *pointer1, *pointer2;

    std::cout << "Fibonacci Sequence: " << num1;

    for (int i = 1; i < 20; i++) // print 20 numbers of sequence
    {
        pointer1 = &num1; // '&' gets the address of operator
        pointer2 = &num2;
        std::cout << ", " << *pointer2;
        swap = *pointer1 + *pointer2; // '*' gets the contents of operator
        num1 = *pointer2;
        num2 = swap;
    }

    std::cout << std::endl;
}