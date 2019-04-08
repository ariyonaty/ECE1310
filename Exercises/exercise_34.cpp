/*
    Ari Yonaty
    ECE 1310
    2.7.2019
    Exercise 34: Patterns
*/

#include <iostream>

using namespace std;

void progA(int row);
void progB(int row);
void progC();
void progD();
void progE();

int main()
{
    cout << "---A---\n";
    progA(6);
    cout << "\n---B---\n";
    progB(6);
    cout << "\n---C---\n";
    progC();
    cout << "\n---D---\n";
    progD();
    cout << "\n---E---\n";
    progE();
}

void progA(int row)
{
    for (int rows = 1; rows <= row; rows++)
    {
        for (int col = 1; col <= rows; col++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void progB(int row)
{
    for (int rows = 1; rows <= row; rows++)
    {
        for (int col = rows; col <= 6; col++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void progC()
{
    for (int rows = 0; rows < 6; rows++)
    {
        for (int space = 0; space < rows; space++)
        {
            cout << " ";
        }

        for (int col = 6; col > rows; col--)
        {
            cout << "*";
        }

        cout << "\n";
    }
}

void progD()
{
    for (int rows = 0; rows < 6; rows++)
    {
        for (int space = 6; space > rows + 1; space--)
        {
            cout << " ";
        }

        for (int col = 0; col < rows + 1; col++)
        {
            cout << "*";
        }

        cout << "\n";
    }
}

void progE()
{
    progA(5);
    progB(6);
}