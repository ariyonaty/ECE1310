/*
    Ari Yonaty
    ECE 1310
    2.19.2019
    Midterm 1
*/

#include <iostream>

using namespace std;

int power(int num, int n);
int factorial(int num);

int main()
{
    int x;
    double e = 1;
    double sum = 0;

    while (x >= 0)
    {
        sum = 1;
        cout << "Enter a number: ";
        cin >> x;

        if (x < 0)
        {
            break;
        }

        cout << "1";

        for (int n = 1; n <= 10; n++)
        {
            double numPow = power(x, n);
            double numFact = factorial(n);
            e = (numPow / numFact);
            sum += e;
            cout << " + " << e;
        }
        cout << "\n = " << sum;
        cout << "\n";
    }

    return 0;
}

int power(int base, int exponent)
{
    int startingExponent = 1;
    int newBase = base;
    while (startingExponent < exponent)
    {
        newBase = newBase * base;
        startingExponent++;
    }
    return newBase;
}

int factorial(int num)
{
    int n = 1, k = 1;

    while (n <= num)
    {
        k *= n;
        ++n;
    }
    return k;
}
