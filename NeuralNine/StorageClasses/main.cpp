#include <iostream>
#include <typeinfo>
#include <cstdint>

void print_number(std::int32_t num)
{
    std::cout << num << '\n';
}

void print_number(double num)
{
    std::cout << num << '\n';
    std::cout << typeid(num).name() << '\n';
}

int main()
{
    print_number(10);
    print_number(10.5);

    // auto num = 10.9f;
    // std::cout << (typeid(num).name()) << '\n';
    // std::cout << sizeof(num) << '\n';

    return 0;
}