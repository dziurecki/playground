#include <iostream>

int main ()
{

    int index=0;
    std::cout << "FizzBuzz Start!" << std::endl;
    std::cout << "Please enter a number: ";
    std::cin >> index;

    if (index > 0)
    {
        for (int iterator = 1; iterator <= index ; ++iterator)
        {
            if (iterator % 3 == 0)
            {
                std::cout << "Fizz";
            }
            if (iterator % 7 == 0)
            {
                std::cout << "Buzz";
            }
            if (iterator % 3 && iterator % 7)
            {
                std::cout << iterator;
            }
            std::cout << std::endl;
        }
    }
    else
    {
        std::cout << "I think this would not work out..." << std::endl;
    }
    return 0;
}