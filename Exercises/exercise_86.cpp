/* 
    Ari Yonaty
    ECE 1310
    3.21.2019
    Exercise 86: Student Scores Structure
 */

#include <iostream>
#include <iomanip>

struct StudentScores
{
    char ID;
    double score;
};

int main()
{
    struct StudentScores scoreArr[5];
    // int arrLength = (int)(sizeof(scoreArr)) / sizeof(scoreArr);

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Student ID and Grade: \n";
        std::cin >> scoreArr[i].ID >> scoreArr[i].score;
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Student ID and Grade: " << scoreArr[i].ID << ", " << scoreArr[i].score << std::endl;
    }

    return 0;
}