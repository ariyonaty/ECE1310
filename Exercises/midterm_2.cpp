/* 
    Ari Yonaty
    ECE 1310
    3.26.2019
    Midterm 2
 */

#include <iostream>

using namespace std;

int gcd_brute_force(int m, int n);
int gcd_euclid(int m, int n);

int main()
{
    // BRUTE FORCE Algorithm
    cout << "The gcd for 12 and 4 using the brute force algorithm is " << gcd_brute_force(12, 4) << endl;
    cout << "The gcd for 21 and 7 using the brute force algorithm is " << gcd_brute_force(21, 7) << endl;

    // EUCLID'S Algorithm
    cout << "The gcd for 12 and 4 using the Euclid algorithm is " << gcd_euclid(12, 4) << endl;
    cout << "The gcd for 21 and 7 using the Euclid algorithm is " << gcd_euclid(21, 7) << endl;

    return 0;
}

int gcd_brute_force(int m, int n)
{
    int gcd;
    for (int i = 1; i <= n; i++)
    {
        if ((m % i == 0) && (n % i == 0))
        {
            gcd = i;
        }
    }
    return gcd;
}

int gcd_euclid(int m, int n)
{
    int swap = m % n;

    while (swap != 0)
    {
        m = n;
        n = swap;
        swap = m % n;
    }
    return n;
}