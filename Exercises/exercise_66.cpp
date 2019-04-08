/* 
    Ari Yonaty
    ECE 1310
    3.7.2019
    Exercise 66: Func Overloading 
*/

#include <iostream>

using namespace std;

int largest(int n1, int n2, int n3, int n4, int n5);

int main()
{
    int n1, n2, n3, n4, n5;
    cout << "Enter 5 numbers: \n";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    cout << "Largest number: " << largest(n1, n2, n3, n4, n5) << "\n";
}

int largest(int n1, int n2, int n3, int n4, int n5)
{
    if ((n1 > n2) && (n1 > n3) && (n1 > n4) && (n1 > n5))
    {
        return n1;
    }
    if ((n2 > n1) && (n2 > n3) && (n2 > n4) && (n2 > n5))
    {
        return n2;
    }
    if ((n3 > n1) && (n3 > n2) && (n3 > n4) && (n3 > n5))
    {
        return n3;
    }
    if ((n4 > n1) && (n4 > n2) && (n4 > n3) && (n4 > n5))
    {
        return n4;
    }
    else
    {
        return n5;
    }
}