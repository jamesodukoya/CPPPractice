#include <iostream>
#include <string>
// #include "PPP_support.h"

void simple_error(std::string s)
{
    std::cout << s << '\n';
};

int main()
{
    std::string first_name{};
    std::cout << "Enter the name of the person you want to write to: ";
    std::cin >> first_name;
    std::string friend_name{};
    std::cout << "Enter your friend's name: ";
    std::cin >> friend_name;
    int age{};
    std::cout << "Enter the recipient's age: ";
    std::cin >> age;
    if (age <= 0 || age >= 110)
    {
        simple_error("you're kidding!");
    }
    else
    {
        std::cout << "Dear " << first_name << ",\n"
                  << "\n\tHow are you? I am fine. I miss you!\n";

        std::cout << "Have you seen " << friend_name << " lately?\n";

        if (age <= 12)
        {
            std::cout << "Next year, you will be " << age + 1 << '\n';
        }
        else if (age == 17)
        {
            std::cout << "Next year, you'll be able to vote.\n";
        }
        else if (age > 70)
        {
            std::cout << "Are you retired?";
        }
    }

    return 0;
}