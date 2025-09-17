#include <iostream>
#include <utility> // for std::swap

int main()
{
    std::cout << "Enter three integer values: ";
    int highest{}, middle{}, lowest{};

    std::cin >> highest >> middle >> lowest;
    if (highest < middle)
    {
        std::swap(highest, middle);
    }
    if (middle < lowest)
    {
        std::swap(middle, lowest);
    }
    if (highest<middle)
    {
        std::swap(highest, lowest);
    }
    std::cout << lowest << ',' << middle << ',' << highest << '\n';
}