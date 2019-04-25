/* 
    Ari Yonaty
    ECE 1310
    4.9.2019
    Exercise 101: Returning pointer from a function
 */

#include <iostream>

int *cube(int *number);

int main()
{
    int n, *p;
    std::cout << "Enter an int: ";
    std::cin >> n;

    p = cube(&n);

    std::cout
        << "Cube of " << n << " is " << *p << std::endl;

    return 0;
}

int *cube(int *number)
{
    static int result = 0;
    result = *number * *number * *number;
    return &result;
}
