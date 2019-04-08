/* 
    Ari Yonaty
    ECE 1310
    3.3.2019
    Exercise 63: Distance Formula
*/

#include <iostream>
#include <math.h>

using namespace std;

double distance(double x1, double x2, double y1, double y2);

int main()
{
    double x1, x2, y1, y2;
    cout << "Enter points (x1, x2, y1, y2):\n";
    cin >> x1 >> x2 >> y1 >> y2;

    cout << "Distance between points is: " << distance(x1, x2, y1, y2) << "\n";
}

double distance(double x1, double x2, double y1, double y2)
{
    double dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return dist;
}