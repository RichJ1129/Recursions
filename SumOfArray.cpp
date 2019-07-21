
#include "SumOfArray.hpp"

int sumArray(int *array, int numElements)
{
    
    if(numElements == 0)
    {
        return 0;
    }
    
    else
    {
        return array[numElements - 1] + (sumArray(array, numElements - 1));
    }
}
