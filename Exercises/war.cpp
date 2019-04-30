/* 
    Ari Yonaty
    ECE 1310
    4.25.2019
    Card Game: War
 */

#include <iostream>
#include <iomanip>
#include <time.h>

void printHand(int[], int[]);
void game(int, int, int[], int[]);
void winner(int, int);

int main()
{
    // Variables
    const char *card_suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const char *card_rank[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    int fullRanks[52] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int playerDeck[26], computerDeck[26];
    int playerWin = 0, computerWin = 0;

    srand(time(NULL));
    // Divide deck of 52 cards into two sets of 26 randomly.
    for (int i = 0; i < 26; i++)
    {
        int randPlayer = rand() % 52;
        playerDeck[i] = fullRanks[randPlayer];
        int randComp = rand() % 52;
        computerDeck[i] = fullRanks[randComp];
    }

    // Output the contents of player and computer hand
    // printHand(playerDeck, computerDeck);

    // commence game
    char start = 'n';
    std::cout << "Ready for War?(y/n) ";
    std::cin >> start;

    if (start == 'y')
    {
        game(playerWin, computerWin, playerDeck, computerDeck);
    }
    else
    {
        std::cout << "Goodbye!" << std::endl;
    }
}

void printHand(int player[], int computer[])
{
    std::cout << "<<< HANDS >>>" << std::endl;
    std::cout << "\t\tP\tC\n";

    for (int i = 0; i < 26; i++)
    {
        std::cout << "\t\t" << player[i] << "\t" << computer[i] << std::endl;
    }
}

void game(int playerWin, int computerWin, int playerDeck[], int computerDeck[])
{
    std::cout << "\t\t<<< GAME >>>" << std::endl;
    std::cout << "\t\tP\tC";
    for (int i = 0; i < 26; i++)
    {
        std::cout << "\nRound " << i + 1 << ":\t" << playerDeck[i] << "\t" << computerDeck[i];
        if (playerDeck[i] > computerDeck[i])
        {
            std::cout << "\tPlayer won war.";
            playerWin++;
        }
        if (playerDeck[i] < computerDeck[i])
        {
            std::cout << "\tComputer won war.";
            computerWin++;
        }
        if (playerDeck[i] == computerDeck[i])
        {
            i++;
            std::cout << "\tWAR!\n\t";
            std::cout << "\t" << playerDeck[i] << "\t" << computerDeck[i];
            if (playerDeck[i] > computerDeck[i])
            {
                std::cout << "\tPlayer won war.";
                playerWin++;
            }
            if (playerDeck[i] < computerDeck[i])
            {
                std::cout << "\tComputer won war.";
                computerWin++;
            }
        }
    }
    winner(playerWin, computerWin);
}

void winner(int playerWin, int computerWin)
{
    std::cout << "\n\t\t<<< SCORE >>> \n\t\tP: " << playerWin << " C: " << computerWin << std::endl;
    if (playerWin > computerWin)
    {
        std::cout << "\t\tPlayer is the winner!" << std::endl;
    }
    if (playerWin < computerWin)
    {
        std::cout << "\t\tComputer is the winner!" << std::endl;
    }
    if (playerWin == computerWin)
    {
        std::cout << "\t\tIt's a draw!" << std::endl;
    }
}