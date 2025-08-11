#include <iostream>
#include <algorithm> // for std::max
#include <cmath>     // for std::abs
#include <iomanip>
#include <string>
#include <string_view>

constexpr bool isEven(int x)
{
    return (x % 2 == 0);
}

int add(int x, int y)
{
    return x + y;
}

constexpr bool approximatelyEqualRel(double a, double b, double relEpsilon)
{
	return (std::abs(a - b) <= (std::max(std::abs(a), std::abs(b)) * relEpsilon)); // Comparing relative to the operands ensures we don't have to change the value of epsilon everytime
}

// Return true if the difference between a and b is less than or equal to absEpsilon, or within relEpsilon percent of the larger of a and b
constexpr bool approximatelyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon)
{
    // Check if the numbers are really close -- needed when comparing numbers near zero.
    if (std::abs(a - b) <= absEpsilon)
        return true;

    // Otherwise fall back to Knuth's algorithm
    return approximatelyEqualRel(a, b, relEpsilon);
}

std::string_view getQuantityPhrase(int personsApples)
{
    if (personsApples < 0)
        return "negative";
    else if (personsApples == 0)
        return "no";
    else if (personsApples == 1)
        return "a single";
    else if (personsApples == 2)
        return "a couple of";
    else if (personsApples ==3)
        return "a few";
    else
        return "many";
}

std::string_view getApplesPluralized(int personsApples)
{
    if (personsApples == 1)
        return "apple";
    return "apples";
}

int main()
{

    // Chapter quiz
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    // Logical Operators
    // std::cout << "Enter a number: ";
    // int value {};
    // std::cin >> value;

    // if (value > 10 && value < 20)
    //     std::cout << "Your value is between 10 and 20\n";
    // else
    //     std::cout << "Your value is not between 10 and 20\n";

    // std::cout << "Enter a number: ";
    // int value {};
    // std::cin >> value;

    // if (value == 0 || value == 1)
    //     std::cout << "You picked 0 or 1\n";
    // else
    //     std::cout << "You did not pick 0 or 1\n";

    // comparing floating numbers

    // a is really close to 1.0, but has rounding errors
    // constexpr double a{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };

    // constexpr double relEps { 1e-8 };
    // constexpr double absEps { 1e-12 };

    // std::cout << std::boolalpha; // print true or false instead of 1 or 0

    // std::cout << approximatelyEqualRel(a, 1.0, relEps) << '\n';     // compare "almost 1.0" to 1.0
    // std::cout << approximatelyEqualRel(a-1.0, 0.0, relEps) << '\n'; // compare "almost 0.0" to 0.0

    // std::cout << approximatelyEqualAbsRel(a, 1.0, absEps, relEps) << '\n';     // compare "almost 1.0" to 1.0
    // std::cout << approximatelyEqualAbsRel(a-1.0, 0.0, absEps, relEps) << '\n'; // compare "almost 0.0" to 0.0

    // constexpr double d1{ 100.0 - 99.99 }; // should equal 0.01 mathematically
    // constexpr double d2{ 10.0 - 9.99 }; // should equal 0.01 mathematically

    // std::cout << std::boolalpha << approximatelyEqualRel(d1,d2,0.00001) << '\n'; // Now, this returns true!

    // std::cout << std::boolalpha << (0.3 == 0.2 + 0.1) << '\n'; // prints false

    // std::cout << std::boolalpha << (0.3f == 0.3) << '\n'; // prints false (different types)

    // constexpr double d1{ 100.0 - 99.99 }; // should equal 0.01 mathematically
    // constexpr double d2{ 10.0 - 9.99 }; // should equal 0.01 mathematically

    // if (d1 == d2)
    //     std::cout << "d1 == d2" << '\n';
    // else if (d1 > d2)
    //     std::cout << "d1 > d2" << '\n';
    // else if (d1 < d2)
    //     std::cout << "d1 < d2" << '\n';

    // std::cout << d1 <<  ' ' << d2 << '\n';


    // int x{1};
    // int y{2};

    // std::cout<<(++x,++y) << '\n';

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
