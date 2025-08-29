#include <string>
#include <iostream>

int main()
{
    std::cout << "Please enter your first name (followed by \"age\"): ";
    std::string first_name{};
    int age{};
    std::cin >> first_name >> age;
    std::cout << "Hello, " << first_name << ". Your age is " <<age << "!\n";


    return 0;
}

// By default, a string is initialized to ""