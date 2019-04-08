/* 
    Ari Yonaty
    ECE 1310
    3.21.2019
    Exercise 88: Multidimensional arrays
 */

#include <iostream>
#include <iomanip>

const int sizeRow = 10;
const int sizeCol = 2;

void printArray(int arrayx[][sizeCol], int sizex, int sizey);

int main()
{
    int arrayA[sizeRow][sizeCol] = {3,
                                    2,
                                    5,
                                    7,
                                    1,
                                    8,
                                    0,
                                    2,
                                    9,
                                    10,
                                    1,
                                    1,
                                    1,
                                    1,
                                    1,
                                    1,
                                    1};

    for (int i = 0; i < sizeCol; i++)
    {
        for (int j = 0; j < sizeRow; j++)
        {
            std::cout << i << ", " << j << " is " << arrayA[j][i] << std::endl;
        }
    }

    printArray(arrayA, sizeRow, sizeCol);

    return 0;
}

void printArray(int arrayx[][sizeCol], int sizex, int sizey)
{
    for (int i = 0; i < sizey; i++)
    {
        for (int j = 0; j < sizex; j++)
        {
            std::cout << i << ", " << j << " is " << arrayx[j][i] << std::endl;
        }
    }
}
