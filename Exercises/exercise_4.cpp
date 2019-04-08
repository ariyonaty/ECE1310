/*
    Ari Yonaty
    ECE 1310
    1.24.2019
    Exercise 4: Input 3 numbers, calculate sum, output sum
*/

#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3, sum;

    // Ask user to input 3 numbers and store as variable

    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    cout << "Enter the third number: ";
    cin >> n3;

    sum = n1 + n2 + n3;
    cout << "Sum of numbers is: " << sum << "\n";

    return 0;
}