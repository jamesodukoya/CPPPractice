#include <iostream>
#include <string>
#include <utility>

int main()
{
    std::cout << "Enter three string values: ";
    std::string str1{}, str2{}, str3{};
    std::cin >> str3 >> str2 >> str1;

    if (str1 < str2)
    {
        std::swap(str1, str2);
    }
    if (str2 < str3)
    {
        std::swap(str2, str3);
    }
    if (str1 < str2)
    {
        std::swap(str1, str2);
    }

    std::cout << str1 << ", " << str2 << ", " << str3 << '\n';
}