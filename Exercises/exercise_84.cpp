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
        178.899994,
        180.910004,
        181.710007,
        183.729996,
        186.119995,
        188.020004,
        186.529999,
        188.160004,
        195.089996,
        191.050003,
        188.740005,
        186.789993,
        188.470001,
        188.720001,
        189.949997,
        191.240005,
        194.020004,
        195.350006,
        195.690002,
        197,
        200.100006,
        199.5};

    double avg = 0, high = aaplClose[0], low = aaplClose[0];
    int arrLength = (sizeof(aaplClose)) / sizeof(aaplClose[0]);

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