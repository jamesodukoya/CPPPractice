#include <iostream>
#include <typeinfo>

int main(){
    auto num = 10;
    std::cout << (typeid(num).name()) << '\n';

    return 0;
}