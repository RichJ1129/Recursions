#include "Menu.hpp"

//Switch case that returns 1 or 2 depending on the user input
int menu()
{
    int userInput = 0;
    std::cout << "Please select your function from the list below" << std::endl;
    std::cout << "1: Reverse String Function" << std::endl;
    std::cout << "2: Sum of Array Function" << std::endl;
    std::cout << "3: Triangle Number Function" << std::endl;
    std::cout << "4: Exit the Program" << std::endl;
    
    userInput = inputValidationFour();
    
    
    switch (userInput)
    {
        case 1:
            return 1;
                
        case 2:
            return 2;
            
        case 3:
            return 3;
            
        case 4:
            return 4;
    }
    
    return 0;
}

void recursiveMenu()
{
    int userInput = menu();
    
    while(userInput != 4)
    {
        if(userInput == 1)
        {
            std::string userString;
            
            std::cout << "Please Enter a string that you would like to reverse and then press enter." << std::endl;
            getline(std::cin, userString);
            std::cout << "Your reversed string is: " << std::endl;
            reverseString(userString);
            std::cout << std::endl;
            
            userInput = menu();
        }
        
        else if(userInput == 2)
        {
            int arrayElements = 0;
            std::cout << "Please enter the amount of elements that you would like to have in your array." << std::endl;
            std::cout << "Choose a number between 1 and 10." << std::endl;
            arrayElements = inputValidationInt();
            
            int array[arrayElements];
            
            for(int i = 0; i < arrayElements; i++)
            {
                int userNum;
                std::cout << "Enter an intger between 0 and 100,000" << std::endl;
                userNum = inputValSum();
                
                array[i] = userNum;
            }
            
            std::cout << "The sum of the array is: " << sumArray(array, arrayElements) << std::endl << std::endl;
            
            userInput = menu();
        }
        
        else if(userInput == 3)
        {
            std::cout << "Please enter an integer that you would like to find the triangular number for between 0 and 10,000" << std::endl;
            int triangleN = inputValTri();
            
            std::cout << "The trinagular number for " << triangleN << " is " << triangleNumber(triangleN) << std::endl << std::endl;
            
            userInput = menu();
        }
    }
}


