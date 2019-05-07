/* 
    Ari Yonaty
    ECE 1310
    5.7.2019
    Exercise 117: File Operations
 */

#include <iostream>
#include <fstream>

int main()
{
    std::ifstream streamIn;
    std::ofstream streamOut;

    streamIn.open("fileIn.txt");
    streamOut.open("fileOut.txt");

    int first, second, third;
    streamIn >> first >> second >> third;
    streamOut << "Sum of 3 numbers from fileIn.txt: " << (first + second + third) << std::endl;

    streamIn.close();
    streamOut.close();

    return 0;
}