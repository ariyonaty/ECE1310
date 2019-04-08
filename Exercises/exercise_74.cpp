/* 
    Ari Yonaty
    ECE 1310
    3.14.2019
    Exercise 74: GCD Algorithms
 */

#include <iostream>
#include <time.h>

using namespace std;

int gcdBrute(int m, int n, int g);
int gcdEuclid(int m, int n);
int gcdDijkstra(int m, int n);

int main()
{
    int m, n;
    double time_taken;
    clock_t t;

    cout << "Enter value for m(larger): ";
    cin >> m;
    cout << "Enter value for n(smaller): ";
    cin >> n;

    cout << "\t****GCD****\n";

    t = clock();
    cout << "Brute Force:\t" << gcdBrute(m, n, n) << "\n";
    t = clock() - t;
    time_taken = ((double)t) / CLOCKS_PER_SEC;
    cout << "Time Taken:\t" << time_taken * 1000000 << " microseconds\n";

    t = clock();
    cout << "Euclid's Algorithm:\t" << gcdEuclid(m, n) << "\n";
    t = clock() - t;
    time_taken = ((double)t) / CLOCKS_PER_SEC;
    cout << "Time Taken:\t" << time_taken * 1000000 << " microseconds\n";

    t = clock();
    cout << "Dijkstra's Algorithm:\t" << gcdDijkstra(m, n) << "\n";
    t = clock() - t;
    time_taken = ((double)t) / CLOCKS_PER_SEC;
    cout << "Time Taken:\t" << time_taken * 1000000 << " microseconds\n";

    return 0;
}

int gcdBrute(int m, int n, int g)
{
    if ((m % g == 0) && (n % g == 0))
    {
        return g;
    }
    else
    {
        return gcdBrute(m, n, g - 1);
    }
}

int gcdEuclid(int m, int n)
{
    if (m % n == 0)
    {
        return n;
    }
    else
    {
        return gcdEuclid(n, m % n);
    }
}

int gcdDijkstra(int m, int n)
{
    if (m == n)
    {
        return m;
    }
    else if (m > n)
    {
        return gcdDijkstra(m - n, n);
    }
    else
    {
        return gcdDijkstra(m, n - m);
    }
}
