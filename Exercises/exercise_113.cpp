/* 
    Ari Yonaty
    ECE 1310
    4.23.2019
    Exercise 113: Replace characters in string
 */

#include <iostream>
#include <string>

int main()
{
    char in[20];
    std::cout << "Enter a string: ";
    std::cin >> in;

    for (int i = 0; i < strlen(in); i++)
    {
        if (in[i] == 'a')
        {
            in[i] = 'b';
        }
    }

    std::cout << "String replaced: " << in << std::endl;

    return 0;
}