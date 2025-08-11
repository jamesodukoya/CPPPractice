#include <iostream>
#include <cmath>
#include <iomanip>

constexpr bool isEven(int x)
{
    return (x % 2 == 0);
}

int add(int x, int y)
{
    return x + y;
}

int main()
{

    int x{1};
    int y{2};

    std::cout<<(++x,++y) << '\n';

    // int x { 5 };
    // int value{ add(x, x+1) }; // undefined behavior: is this 5 + 6, or 6 + 6?
    // // It depends on what order your compiler evaluates the function arguments in

    // std::cout << value << '\n'; // value could be 11 or 12, depending on how the above line evaluates!

    // Postfix operator (less performant)
    // int x{5};
    // int y{x++}; // x is incremented to 6, copy of original x is evaluated to the value 5, and 5 is assigned to y
    // std::cout << x << ' ' << y << '\n';

    // std::cout << "Enter an integer: ";
    // int x{};
    // std::cin >> x;
    
    // isEven(x) ? std::cout << x << " is even\n" : std::cout << x << " is odd\n";

    // constexpr double x{std::pow(2.3,5.2)};
    //     std::cout << std::fixed << std::setprecision(15) << x << '\n';

    // constexpr double x {10 + 10.7};
    // std::cout << x << '\n';

    return 0;
}
