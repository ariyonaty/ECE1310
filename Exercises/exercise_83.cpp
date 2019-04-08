/* 
    Ari Yonaty
    ECE 1310
    3.20.2019
    Exercise 83: Student Grades - Array
 */

#include <iostream>
#include <cmath>

int main()
{
    int avg = 0;
    int score[20] = {84, 66, 77, 78, 89, 92, 61, 91, 65, 72, 70, 85, 97, 65, 84, 79, 92, 76, 86, 79};

    for (int i = 0; i < 20; i++)
    {
        avg += score[i];
    }

    std::cout << "Average Score: " << avg / 20 << std::endl;

    return 0;
}