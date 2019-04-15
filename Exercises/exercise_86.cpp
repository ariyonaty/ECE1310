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
    double score[21] = {84, 66, 77, 78, 89, 92, 61, 91, 65, 72, 70, 85, 97, 65, 84, 79, 92, 76, 86, 79};
    char id[21] = "ABCDEFGHIJKLMNOPQRST";

    StudentScores stdScores[20];

    // interate thru arrays score and id and copy to struct stdScores
    //      as well as add to the sum of scores simulateneuously
    double sum = 0.0;
    for (int i = 0; i < 20; i++)
    {
        stdScores[i].score = score[i];
        stdScores[i].ID = id[i];
        sum += stdScores[i].score;
    }

    // calulcate size of array and divide sum by it to get averag
    int size = sizeof(stdScores) / sizeof(*stdScores);
    std::cout << "Average Score: " << sum / size << std::endl;

    // create new array and compare each value to average score
    char idAbove[size];
    for (int i = 0; i < size; i++)
    {
        if (stdScores[i].score > (sum / size))
        {
            idAbove[i] = stdScores[i].ID;
        }
        else
        {
            idAbove[i] = '-';
        }
    }
    std::cout << "List of Student IDs:       ";
    for (int i = 0; i < size; i++)
    {
        std::cout << id[i] << " ";
    }

    // output difference between all student ids and ids above average
    std::cout << std::endl
              << "Student IDs above average: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << idAbove[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
