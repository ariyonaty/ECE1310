/*
    Ari Yonaty
    ECE 1310
    1.24.2019
    Exercise 8: num of bytes sizeof()
*/

#include <iostream>

using namespace std;

int main()
{
    int v, w, x, y, z;

    int a;
    char b;
    float c;
    bool d;
    double e;

    v = sizeof(a);
    w = sizeof(b);
    x = sizeof(c);
    y = sizeof(d);
    z = sizeof(e);

    cout << "The number of bytes for an integer variable is " << v << ".\n";
    cout << "The number of bytes for an char variable is " << w << ".\n";
    cout << "The number of bytes for an float variable is " << x << ".\n";
    cout << "The number of bytes for an bool variable is " << y << ".\n";
    cout << "The number of bytes for an double variable is " << z << ".\n";

    return 0;
}