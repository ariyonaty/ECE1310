/*
    Ari Yonaty
    ECE 1310
    1.31.2019
    Exercise 23: Student scores
*/

#include <iostream>

using namespace std;

int main()
{
    int grade;
    char letter;

    cout << "Enter your grade: ";
    cin >> grade;

    if (grade >= 60)
    {
        letter = 'D';
        if (grade >= 70)
        {
            letter = 'C';
            if (grade >= 80)
            {
                letter = 'B';
                if (grade >= 90)
                {
                    letter = 'A';
                }
            }
        }
        cout << "Letter Grade: " << letter << "\n";
    }
    else
    {
        letter = 'F';
        cout << "Letter Grade: " << letter << "\n";
    }

    return 0;
}