#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {0,1,2,3,4,5};
    for (std::vector<int>::size_type i=0; i<v.size(); ++i)
    {
        std::cout << typeid(std::vector<int>::size_type).name() << '\n';
    }
}