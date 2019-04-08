/* 
    Ari Yonaty
    ECE 1310
    4.5.2019
    Exercise 92: Search thru array
 */

#include <iostream>

const int SIZE = 20;

bool checkArray(int[], int);

int main()
{
    int scores[SIZE] = {84, 66, 77, 78, 89, 92, 61, 91, 65, 72, 70, 85, 97, 65, 84, 79, 92, 76, 86, 79};
    int key;

    std::cout << "Enter Score to check if in Array: ";
    std::cin >> key;

    if (checkArray(scores, key) == true)
    {
        std::cout << "Grade is in database." << std::endl;
    }
    else
    {
        std::cout << "Grade not in database." << std::endl;
    }
}

bool checkArray(int array[], int key)
{
    bool inDatabase = false;
    for (int i = 0; i < SIZE; i++)
    {
        if (key == array[i])
        {
            inDatabase = true;
        }
    }
    return inDatabase;
}