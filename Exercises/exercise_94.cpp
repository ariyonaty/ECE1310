/* 
    Ari Yonaty
    ECE 1310
    4.7.2019
    Exercise 94: Sorting student grades
 */

#include <iostream>

const int SIZE = 20;

void printArray(int[]);
void bubbleSort(int[]);

int main()
{
    int score[SIZE] = {84, 66, 77, 78, 89, 92, 61, 91, 65, 72, 70, 85, 97, 65, 84, 79, 92, 76, 86, 79};

    std::cout << "Init. Array: ";
    printArray(score);
    bubbleSort(score);

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

void bubbleSort(int array[])
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