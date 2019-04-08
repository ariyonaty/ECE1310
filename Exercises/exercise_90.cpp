/* 
    Ari Yonaty
    ECE 1310 
    4.5.2019
    Exercise 90: Passing Arrays to Functions
 */

#include <iostream>

void printArray(int[], int);
const int sizeA = 10;

int main()
{
    int arrayA[sizeA] = {3,
                         2,
                         5,
                         7,
                         1,
                         8,
                         0,
                         2,
                         9,
                         10};
    printArray(arrayA, sizeA);

    return 0;
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}