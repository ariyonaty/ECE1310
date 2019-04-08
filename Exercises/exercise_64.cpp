/* 
    Ari Yonaty
    ECE 1310
    3.3.2019
    Exercise 64: Reversed
*/

#include <iostream>
#include <numeric>

using namespace std;

int reversed(int num);

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << num << " reversed is " << reversed(num) << "\n";
}

int reversed(int num)
{
    int reverse = 0;

    /* 
        LOGIC: Takes the last digit of a number via modulus, and adds it to the reverse.
        EXAMPLE: 12345. 1st loop: takes 5 from modulus, and adds -> 5.
                        2nd loop: takes 4 from modulus, and adds -> (5*10)+4) = 54
                        3rd loop: takes 3 from modulus, and adds -> (54*10)+3) = 543
    */
    while (num > 0)
    {
        reverse = (reverse * 10) + (num % 10);
        num = num / 10;
    }
    return reverse;
}