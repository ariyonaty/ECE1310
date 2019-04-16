/* 
    Ari Yonaty
    ECE 1310
    4.16.2019
    Exercise 104: Simulate drawing 4 cards from a deck.
 */

#include <iostream>

int main()
{
    const char *card_suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const char *card_rank[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

    std::cout << "Drawing 5 cards..." << std::endl;
    for (int i = 0; i < 5; i++)
    {
        int randSuit = rand() % 4;
        int randRank = rand() % 13;

        std::cout << card_rank[randRank] << " of " << card_suit[randSuit] << std::endl;
    }

    return 0;
}