#include <iostream>
#include <typeinfo>

int main(){
    auto num = 10.9f;
    std::cout << (typeid(num).name()) << '\n';
    std::cout << sizeof(num) << '\n';

    return 0;
}