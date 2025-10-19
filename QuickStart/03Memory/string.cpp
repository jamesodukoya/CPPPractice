#include <array>
#include <cstdint>
#include <iostream>
#include <string>

int main() {
    constexpr char my_text1[]{"Jan"}; // \0 -adds null terminator by default
    constexpr auto my_text2{std::array<char, 4U>{"Jan"}};
    constexpr auto my_text3{"Jan"}; // defaults to char pointer
    std::string my_text4{"Jan"};    // string cannot be a constexpr
    std::cout << my_text4.size() << '\n';
    std::cout << sizeof(my_text4) << '\n';

    /*What's acceptable in modern C++
    my_text1
    my_text4*/

    return 0;
}