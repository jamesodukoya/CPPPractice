#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // for ranges

int main()
{
    std::vector<std::string> disliked = {"Broccoli","one","two"};
    for (std::string word; std::cin >> word;)
    {
        if (std::ranges::contains(disliked,word))
            std::cout << "BLEEP\n";
        else
            std::cout << word << '\n';
    }
}