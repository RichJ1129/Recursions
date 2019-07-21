
#include "TriangularNumber.hpp"

int triangleNumber(int userChoice)
{
    if(userChoice == 0)
    {
        return 0;
    }
    
    else
    {
        return userChoice + triangleNumber(userChoice - 1);
    }
}
