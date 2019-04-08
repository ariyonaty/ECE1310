/*
    Ari Yonaty
    ECE 1310
    1.31.2019
    Exercise 21: Student scores
*/

#include <iostream>

using namespace std;

int main()
{
    int score1, score2, score3, average;

    cout << "Enter a number: ";
    cin >> score1;
    cout << "Enter a number: ";
    cin >> score2;
    cout << "Enter a number: ";
    cin >> score3;

    average = (score1 + score2 + score3) / 3;

    if (score1 >= average)
    {
        cout << "Grade: " << score1 << "\t Average: " << average << "\t PASSED!\n";
    }
    else
    {
        cout << "Grade: " << score1 << "\t Average: " << average << "\t FAILED!\n";
    }
    if (score2 >= average)
    {
        cout << "Grade: " << score2 << "\t Average: " << average << "\t PASSED!\n";
    }
    else
    {
        cout << "Grade: " << score2 << "\t Average: " << average << "\t FAILED!\n";
    }
    if (score3 >= average)
    {
        cout << "Grade: " << score3 << "\t Average: " << average << "\t PASSED!\n";
    }
    else
    {
        cout << "Grade: " << score3 << "\t Average: " << average << "\t FAILED!\n";
    }

    return 0;
}