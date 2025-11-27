#include <iostream>

int main() {
    std::cout << "My name is Dara" << '\n';

    int num = 10;
    double num1 = static_cast<double>(num) / 7;
    int *p1 = &num;
    int &ref = num;
    std::cout << *&num << '\n' << *p1 << '\n' << num1 << '\n';
    std::cout << "Pointer is: " << p1 << '\n';
    std::cout << "Ref is: " << ref << '\n';

    return 0;
}