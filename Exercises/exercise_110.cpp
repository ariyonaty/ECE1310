/* 
    Ari Yonaty
    ECE 1310
    4.23.2019
    Exercise 110: String functions 
 */

#include <iostream>
#include <string>

int main()
{
    char a[20], b[20], c[20];
    std::cout << "Enter string a: ";
    std::cin >> a;
    std::cout << "Length of string: " << strlen(a) << std::endl;
    strcpy(b, a);
    std::cout << "Copying string a to b... b is \"" << b << "\"\nEnter string c: ";
    std::cin >> c;
    std::cout << "Comparing string b and c: " << strcmp(b, c) << std::endl;
    std::cout << "Concatenating string a and c: " << strcat(a, c) << std::endl;

    return 0;
}