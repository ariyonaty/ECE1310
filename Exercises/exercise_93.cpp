/* 
    Ari Yonaty
    ECE 1310 
    4.7.2019
    Exercise 93: Sorting Array
 */

#include <iostream>

const int SIZE = 10;

void printArray(int[]);
void bubbleSortArray(int[]);

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

    std::cout << "Initial Array: ";
    printArray(arrayA);
    bubbleSortArray(arrayA);

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

void bubbleSortArray(int array[])
{
    int temp, count = 1;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if (array[j] < array[i])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
            std::cout << "Step " << count << ": ";
            printArray(array);
            count++;
        }
    }
}