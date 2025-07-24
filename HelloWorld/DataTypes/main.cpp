#include <iomanip> // for std::setw (which sets the width of the subsequent output). Generally for manipulating output. Also for std::setpreision()
#include <iostream>
#include <climits> // for CHAR_BIT
#include <cstdint> // for fixed with integer std::intN_t
#include <cstddef> // for typedef std::size_t
#include <limits>

int main()
{

    std::cout << "Enter a number 0 through 9 (inclusive): ";
    int x{};
    std::cin >> x;
    if (x == 2 || x == 3 || x == 5 || x == 7)
        std::cout << "The digit is prime!\n";
    // else if (x<0)
    //     std::cout << "The value is negative!\n";
    else
        std::cout << "The digit is not prime!\n";

    // std::cout << std::boolalpha; // print bools as true or false

    // bool b1 = 4 ; // copy initialization allows implicit conversion from int to bool
    // std::cout << b1 << '\n';

    // bool b2 = 0 ; // copy initialization allows implicit conversion from int to bool
    // std::cout << b2 << '\n';

    // double x{+150.0/0.0};
    // std::cout << x << '\n';

    // std::cout << std::setprecision(17);

    // std::cout << 9.87654321 << '\n';
    // std::cout << 987.654321f << '\n';
    // std::cout << 987654.321f << '\n';
    // std::cout << 9876543.21f << '\n';
    // std::cout << 0.0000987654321f << '\n';

    // std::cout << std::boolalpha; // print bool as true or false rather than 1 or 0
    // std::cout << "float: " << std::numeric_limits<float>::is_iec559 << '\n';
    // std::cout << "double: " << std::numeric_limits<double>::is_iec559 << '\n';
    // std::cout << "long double: " << std::numeric_limits<long double>::is_iec559 << '\n';

    // float a {1.0f};
    // float b {a/3.0f};
    // std::cout << b << '\n';

    // int charge{119};
    // charge = 5;
    // std::cout << sizeof(charge) << " " << charge << '\n';

    // std::cout << sizeof(std::size_t) << '\n';

    return 0;
}

// int main()
// {
// int x{5};
// std::size_t s {sizeof(x)};
// std::cout << s << " bytes\n";
//
// return 0;
// }

// int main()
// {
//     std::cout << "A byte is " << CHAR_BIT << " bits\n\n";

//     std::cout << std::left; // left justify output

//     std::cout << std::setw(16) << "bool:" << sizeof(bool) << " bytes\n";
//     std::cout << std::setw(16) << "char:" << sizeof(char) << " bytes\n";
//     std::cout << std::setw(16) << "short:" << sizeof(short) << " bytes\n";
//     std::cout << std::setw(16) << "int:" << sizeof(int) << " bytes\n";
//     std::cout << std::setw(16) << "long:" << sizeof(long) << " bytes\n";
//     std::cout << std::setw(16) << "long long:" << sizeof(long long) << " bytes\n";
//     std::cout << std::setw(16) << "float:" << sizeof(float) << " bytes\n";
//     std::cout << std::setw(16) << "double:" << sizeof(double) << " bytes\n";
//     std::cout << std::setw(16) << "long double:" << sizeof(long double) << " bytes\n";

//     return 0;
// }
