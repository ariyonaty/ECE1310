/* 
    Ari Yonaty
    ECE 1310
    4.9.2019
    Exercise 99: Passing Pointers to Functions
 */

#include <iostream>

void cube(int *);

int main()
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    cube(&n);
    std::cout << n << " cubed is " << n << std::endl;

    return 0;
}

void cube(int *num)
{
    *num = *num * *num * *num;
}