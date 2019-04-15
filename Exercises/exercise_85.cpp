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
    struct Time breakfast_time;
    struct Time lunch_time;
    struct Time dinner_time;

    std::cout << "Please enter in military time." << std::endl
              << "Separate numbers using 'space' or 'enter'\n*******\n";

    // Ask user to input times for breakfast, lunch, and dinner
    std::cout << "Enter hour, minute, second for breakfast: ";
    std::cin >> breakfast_time.hour >> breakfast_time.minute >> breakfast_time.second;

    std::cout << "Enter hour, minute, second for lunch: ";
    std::cin >> lunch_time.hour >> lunch_time.minute >> lunch_time.second;

    std::cout << "Enter hour, minute, second for dinner: ";
    std::cin >> dinner_time.hour >> dinner_time.minute >> dinner_time.second;

    // outputs the times for breakfast, lunch, and dinner
    std::cout << "*******\nBreakfast Time: " << std::setfill('0') << std::setw(2)
              << breakfast_time.hour << ":" << std::setfill('0') << std::setw(2) << breakfast_time.minute << ":"
              << std::setfill('0') << std::setw(2) << breakfast_time.second << std::endl;
    std::cout << "Lunch Time: " << std::setfill('0') << std::setw(2)
              << lunch_time.hour << ":" << std::setfill('0') << std::setw(2) << lunch_time.minute << ":"
              << std::setfill('0') << std::setw(2) << lunch_time.second << std::endl;
    std::cout << "Dinner Time: " << std::setfill('0') << std::setw(2)
              << dinner_time.hour << ":" << std::setfill('0') << std::setw(2) << dinner_time.minute << ":"
              << std::setfill('0') << std::setw(2) << dinner_time.second << std::endl;

    return 0;
}