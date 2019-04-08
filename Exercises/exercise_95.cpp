/* 
    Ari Yonaty
    ECE 1310
    4.7.2019
    Exercise 95: Binary Search Algorithm
 */

#include <iostream>

void printArray(int[]);
void bubbleSort(int[]);
bool binarySearch(int[], int);

const int SIZE = 20;

int main()
{
    int score[SIZE] = {84, 66, 77, 78, 89, 92, 61, 91, 65, 72, 70, 85, 97, 65, 84, 79, 92, 76, 86, 79};
    int key;

    // Output orig. array
    std::cout << "Original Array: ";
    printArray(score);

    // Sort array so binary search can be performed
    bubbleSort(score);
    std::cout << "Sorted Array: ";
    printArray(score);

    // Binary search thru sorted array
    std::cout << "Enter key: ";
    std::cin >> key;
    bool result = binarySearch(score, key);
    if (result == true)
    {
        std::cout << "Key found." << std::endl;
    }
    else
    {
        std::cout << "Key not found." << std::endl;
    }
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
    int temp;

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
        }
    }
}

bool binarySearch(int array[], int key)
{
    bool found = false;
    int high = SIZE;
    int low = 0;
    int middle = (low + (high - 1)) / 2;

    while (low <= high)
    {
        if (array[middle] == key)
        {
            return true;
        }
        else if (array[middle] > key)
        {
            high = middle;
            middle = (low + (high - 1)) / 2;
        }
        else if (array[middle] < key)
        {
            low = middle;
            middle = (low + (high - 1)) / 2;
        }
        return false;
    }
    return false;
}