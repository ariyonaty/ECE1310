/* 
    Ari Yonaty
    ECE 1310
    3.20.2019
    Exercise 84: Stock Average
 */

#include <iostream>
#include <iomanip>

int main()
{
    double aaplClose[] = {
        186.56,
        188.16,
        188.02,
        178.90,
        186.12,
        183.73,
        181.71,
        180.91,
    };

    double avg = 0, high = aaplClose[0], low = aaplClose[0];
    int arrLength = (int)(sizeof(aaplClose)) / sizeof(aaplClose[0]);

    for (int i = 0; i < arrLength; i++)
    {
        if (aaplClose[i] > high)
        {
            high = aaplClose[i];
        }

        if (aaplClose[i] < low)
        {
            low = aaplClose[i];
        }

        avg += aaplClose[i];
    }

    std::cout << "Average: \t" << std::setprecision(2) << std::fixed << avg / arrLength << std::endl;
    std::cout << "AAPL High: \t" << high << std::endl;
    std::cout << "AAPL Low: \t" << low << std::endl;

    return 0;
}