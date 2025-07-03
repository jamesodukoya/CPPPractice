#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> brothers{"John", "Paul", "George", "Ringo"};
    for (std::string &brother : brothers)
    {
        std::cout << "Hello " << brother << "!\n";
    }
}