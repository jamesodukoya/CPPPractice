#include <iostream>
#include <cmath> // for std::abs

int main()
{
    double num1{}, num2{};
    while (std::cin >> num1 >> num2)
    {
        if (num1 == num2)
            std::cout << "the numbers are equal\n";
        else
            std::cout << "the smaller value is: " << (num1<num2 ? num1 : num2) << '\t' 
                      << "the larger value is: " << (num1>num2 ? num1 : num2) << '\n';
        if (std::abs(num1-num2)<0.01)
            std::cout << "the numbers are almost equal\n";
    }

    return 0;
}