/* 
    Ari Yonaty
    ECE 1310
    3.21.2019
    Exercise 85: Struct Time
 */

#include <iostream>
#include <iomanip>

struct Time
{
    int hour;
    int minute;
    int second;
};

int main()
{
    struct Time currentTime;

    std::cout << "Enter hr, min, sec: \n";
    std::cin >> currentTime.hour >> currentTime.minute >> currentTime.second;

    std::cout << "Current Time: " << std::setfill('0') << std::setw(2)
              << currentTime.hour << ":" << currentTime.minute << ":"
              << std::setfill('0') << std::setw(2) << currentTime.second << std::endl;

    return 0;
}