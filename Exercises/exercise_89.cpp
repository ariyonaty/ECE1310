/* 
    Ari Yonaty
    ECE 1310
    3.21.2019
    Exercise 89: Tic Tac Toe
 */

//  Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//  Functions
char setup();
void printBoard(char array[][3]);
bool turn(char array[][3], int t);
bool winner(char array[][3]);

//  Variables
char player;
char computer = 'X';
bool game;

int main()
{

    char introArray[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "Welcome to TicTacToe!\nThis is the layout of the board:\n";
    printBoard(introArray);
    cout << "In order to play, select a position 1 - 9 to place board.\n3 in a row wins.\n...\nReady? Let's begin!\n...\n";

    player = setup();

    if (player == 'X')
    {
        computer = 'O';
    }
    cout << "Player: " << player << endl;
    cout << "Computer: " << computer << endl
         << "...\n";

    char array[3][3] = {
        '-',
        '-',
        '-',
        '-',
        '-',
        '-',
        '-',
        '-',
        '-'};

    while (game == false)
    {
        turn(array, 1);
    }

    return 0;
}

char setup()
{
    char choice;
    cout << "Do you want to be X or O? ";
    cin >> choice;
    return choice;
}

void printBoard(char array[][3])
{
    cout << array[0][0] << " | " << array[0][1] << " | " << array[0][2] << endl;
    cout << "---------" << endl;
    cout << array[1][0] << " | " << array[1][1] << " | " << array[1][2] << endl;
    cout << "---------" << endl;
    cout << array[2][0] << " | " << array[2][1] << " | " << array[2][2] << endl;
}

bool turn(char array[][3], int t)
{
    if (t == 1)
    {
        cout << "Player turn....\n";
        printBoard(array);
        int posX, posY;
        cout << "Enter x, y (1-3, 1-3): ";
        cin >> posX >> posY;

        if (array[posX - 1][posY - 1] == '-')
        {
            array[posX - 1][posY - 1] = player;
        }
        else
        {
            turn(array, 1);
        }
        turn(array, 0);
    }
    else if (t == 0)
    {
        cout << "Computer turn....\n";
        printBoard(array);
        int posX = rand() % 3;
        int posY = rand() % 3;

        if (array[posX][posY] == '-')
        {
            array[posX][posY] = computer;
        }
        else
        {
            turn(array, 0);
        }
        turn(array, 1);
    }
    return game = winner(array);
}

bool winner(char array[][3])
{
    for (int i = 0; i < 3; i++)
    {
        if (array[0][i] == array[1][i] == array[2][i])
        {
            return true;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (array[i][0] == array[i][1] == array[i][2])
        {
            return true;
        }
    }

    return false;
}
