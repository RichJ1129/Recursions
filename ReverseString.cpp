
#include "ReverseString.hpp"

void reverseString(std::string userInput)
{
    char rString;
    
    if(userInput == "")
    {
        std::cout << std::endl;
    }
    
    else
    {
        rString = userInput.at(userInput.length() - 1);
        std::cout << rString;
        userInput.pop_back(); //Source: www.cplusplus.com/reference/string/string/pop_back/
        reverseString(userInput);
    }
    
}
