/* 
    Ari Yonaty
    ECE 1310
    4.5.2019
    Exercise 91: Call by Value vs Call by Reference
 */

#include <iostream>

void printArray(int[]);
void changeArray(int[]);

const int SIZE = 10;

int main()
{
    int arrayA[SIZE] = {3,
                        2,
                        5,
                        7,
                        1,
                        8,
                        0,
                        2,
                        9,
                        10};
    printArray(arrayA);
    changeArray(arrayA);
    printArray(arrayA);

    return 0;
}

void printArray(int array[])
{
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void changeArray(int array[])
{
    for (int i = 0; i < SIZE; i++)
    {
        array[i] = array[i] + 1;
    }
}
