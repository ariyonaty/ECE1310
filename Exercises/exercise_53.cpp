/*
    Ari Yonaty
    ECE 1310
    2.28.2019
    Exercise 53: Total Cost
*/

#include <iostream>

using namespace std;

double totalCost(int quantity, double unit_price);

int main()
{
    int quantity;
    double unit_price;

    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter unit price: $";
    cin >> unit_price;
    double cost = totalCost(quantity, unit_price);
    cout << "Total cost: $" << cost << "\n";
}

double totalCost(int quantity, double unit_price)
{
    double cost = quantity * unit_price;
    return cost;
}
