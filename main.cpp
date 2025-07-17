#include <iostream> // for std::cout and std::cin

// Receives user input of 3 umbers
int main()
{
    
    std::cout << "Enter an integer: ";

    int firstNum{};
    std::cin >> firstNum;

    std::cout << "Enter another integer: ";

    int secondNum{};
    std::cin >> secondNum;

    std::cout << firstNum << " + " << secondNum << " is: " << firstNum + secondNum << ".\n";

    std::cout << firstNum << " - " << secondNum << " is: " << firstNum - secondNum << ".\n";

    return 0;
}
