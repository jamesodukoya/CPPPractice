#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter one or more sentences: ";
    int number_of_words{0};
    std::string previous{};
    std::string current{};
    while (std::cin >> current)
    {
        ++number_of_words;
        if (current == previous)
            std::cout << "Word number " << number_of_words << " repeated word: " << current << '\n';
        previous = current;
    }
}