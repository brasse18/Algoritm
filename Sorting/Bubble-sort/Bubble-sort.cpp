#include <iostream>
#include "Bubble-sort.h"

using namespace std;

bubbleSort::bubbleSort::bubbleSort()
{
}

bubbleSort::bubbleSort::~bubbleSort()
{
}

int bubbleSort::bubbleSort::sort(int size, int *array)
{
    int end = size-1;
    int tempInt = 0;
    for (int i = 0; i < size; i++)
    {
        for (int s = 0; s < end; s++)
        {
            if (array[s] > array[s + 1])
            {
                tempInt = array[s + 1];
                array[s + 1] = array[s];
                array[s] = tempInt;
            }
        }
        end--;
    }

    cout << "end Nummer: ";
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
