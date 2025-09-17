#include <string>
#include <iostream>

#pragma GCC diagnostic ignored "-Wfloat-conversion"
#pragma GCC diagnostic ignored "-Wconversion"

int main()
{
    double d = 0;
    while (std::cin >>d){
        int i=d;
        char c = i;
        std::cout << "d == " << d
                  << ", i == " << i
                  << ", c == " << c
                  << ", char(" << c << ")";
    }
    // std::cout << "Please enter your first name (followed by \"age\"): ";
    // std::string first_name{};
    // int age{};
    // std::cin >> first_name >> age;
    // std::cout << "Hello, " << first_name << ". Your age is " <<age << "!\n";

    return 0;
}

// By default, a string is initialized to ""