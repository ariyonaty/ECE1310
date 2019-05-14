/* 
    Ari Yonaty
    ECE 1310
    5.14.2019
    Final
 */

#include <iostream>
#include <fstream>

void printArray(double array[]);
void bubbleSortPrice(double array[]);
void bubbleSortDist(double array[]);
void bubbleSortPrice2(double array[]);
void bubbleSortDist2(double array[]);
void textSave(double array[], int type);

struct Requests
{
    double dbDistance;
    int nPrice;
};

char chReq[7] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
char chReqSort[7] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
char chReqSort2[7] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};

int main()
{
    double dbArrDistance[7], nArrPrice[7];

    /* 
        1) Assign requests values from data to struct objects 
            where, for example A is the first two values.
        2) Copy data from individual request into array
     */

    Requests myReq[7] = {0.1, 5, 0.3, 25, 0.3, 15, 0.6, 17, 1.5, 20, 1, 20, 2, 30};

    // Remove for testing purposes..

    std::cout << "-------Requests Dashboard-------\n";
    for (int i = 0; i < 7; i++)
    {
        dbArrDistance[i] = myReq[i].dbDistance;
        nArrPrice[i] = myReq[i].nPrice;
        std::cout << "Distance: " << dbArrDistance[i] << "\tPrice: " << nArrPrice[i] << std::endl;
    }

    // Checkpoint: Ask driver how to prioritize.
    // Depending on input, prioritize accordingly.
    char chInput;
    std::cout << "-------Filter Requests-------\n";
    std::cout << "Hello driver, would you like priority based on price or distance (p/d) : ";
    std::cin >> chInput;
    if (chInput == 'p')
    {
        std::cout << "Okay..prioritizing according to price.\n";
        bubbleSortPrice(nArrPrice);
    }
    else if (chInput == 'd')
    {
        std::cout << "Okay..prioritizing according to distance.\n";
        bubbleSortDist(dbArrDistance);
    }
    else
    {
        std::cerr << "Wrong input. Please rerun the program.\n";
        return -1;
    }

    std::cout << "Saving to Text File......\n";
    bubbleSortPrice2(nArrPrice);
    bubbleSortDist2(dbArrDistance);
    std::cout << "-------Enjoy the Ride!-------\n";

    return 0;
}

void bubbleSortDist(double array[])
{
    int temp;
    char chTemp;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (array[j] < array[i])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
                chTemp = chReq[j];
                chReq[j] = chReq[i];
                chReq[i] = chTemp;
            }
        }
        chReqSort[i] = chReq[i];
    }
    printArray(array);
}

void bubbleSortPrice(double array[])
{
    int temp;
    char chTemp;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (array[j] > array[i])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
                chTemp = chReq[j];
                chReq[j] = chReq[i];
                chReq[i] = chTemp;
            }
        }
        chReqSort[i] = chReq[i];
    }
    printArray(array);
}

void printArray(double array[])
{
    for (int i = 0; i < 7; i++)
    {
        std::cout << "Request " << chReqSort[i] << ": " << array[i] << std::endl;
    }
}

void textSave(double array[], int type)
{
    std::ofstream streamOut;
    streamOut.open("results.txt", std::fstream::app);

    if (type == 0)
    {
        streamOut << "Prioritization according to Distance.\n";
        for (int i = 0; i < 7; i++)
        {
            streamOut << "Request " << chReqSort[i] << ": " << array[i] << std::endl;
        }
    }
    if (type == 1)
    {
        streamOut << "Prioritization according to Price.\n";
        for (int i = 0; i < 7; i++)
        {
            streamOut << "Request " << chReqSort2[i] << ": " << array[i] << std::endl;
        }
    }
    streamOut.close();
}

void bubbleSortDist2(double array[])
{
    int temp;
    char chTemp;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (array[j] < array[i])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
                chTemp = chReq[j];
                chReq[j] = chReq[i];
                chReq[i] = chTemp;
            }
        }
        chReqSort[i] = chReq[i];
    }
    textSave(array, 0);
}

void bubbleSortPrice2(double array[])
{
    int temp;
    char chTemp;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (array[j] > array[i])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
                chTemp = chReq[j];
                chReq[j] = chReq[i];
                chReq[i] = chTemp;
            }
        }
        chReqSort2[i] = chReq[i];
    }
    textSave(array, 1);
}