/* 
    Ari Yonaty
    ECE 1310
    5.7.2019
    Exercise 118: File Operations
 */

#include <iostream>
#include <fstream>

int main()
{
    std::ifstream streamIn;
    std::ofstream streamOut;

    streamIn.open("dataIn.txt");
    streamOut.open("dataOut.txt");

    int data[20];
    double sum;

    for (int i = 0; i < 20; i++)
    {
        streamIn >> data[i];
        sum += data[i];
    }

    streamOut << "Average from fileIn.txt: " << sum / 20 << std::endl;

    streamIn.close();
    streamOut.close();

    return 0;
}
