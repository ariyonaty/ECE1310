/* 
    Ari Yonaty
    ECE 1310
    3.1.2019
    Exercise 56: timeInSeconds()
*/

#include <iostream>

using namespace std;

int timeInSeconds(int hours, int minutes, int seconds);

int main()
{
    int hours, minutes, seconds;
    cout << "Enter Time in 24-HR Format: (Hr/Min/Sec) \n";
    cin >> hours >> minutes >> seconds;
    cout << "Seconds since midnight: " << timeInSeconds(hours, minutes, seconds) << " seconds.\n";

    return 0;
}

int timeInSeconds(int hours, int minutes, int seconds)
{
    int hoursInSeconds = hours * 3600;
    int minutesInSeconds = minutes * 60;

    return (hoursInSeconds + minutes + seconds);
}