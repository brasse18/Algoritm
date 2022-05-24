#include <iostream>
#include <sstream>
#include "Bubble-sort.h"

using namespace std;

int const arraySize = 10;
int dataSet[arraySize];

int main(int argc, char const *argv[])
{
    if (argc != 0)
    {
        int max = arraySize;
        if (argc < arraySize)
        {
            max = argc-1;
            cout << "Antal numer: " << max << endl;
        }
        for (int i = 0; i < max; i++)
        {
            std::istringstream iss(argv[i+1]);
            int val;

            if (iss >> val)
            {
                dataSet[i] = val;
            }
        }
    }
    cout << "Nummer: ";
    for (int i = 0; i < 10; i++)
    {
        cout << dataSet[i] << " ";
    }
    cout << endl;

    bubbleSort sorter;
    sorter.sort(arraySize, dataSet);

    return 0;
}
