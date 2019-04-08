/* 
    Ari Yonaty
    ECE 1310
    3.21.2019
    Exercise 87: Multidimensional arrays
 */

#include <iostream>
#include <iomanip>

int main()
{
    int score[5][2] = {'a',
                       99,
                       'b',
                       88,
                       'c',
                       99,
                       'd',
                       89,
                       'e',
                       100};

    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += score[i][1];
    }

    std::cout << "Average grade: " << sum / 5 << std::endl;

    return 0;
}
