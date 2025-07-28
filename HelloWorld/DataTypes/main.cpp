#include <iomanip> // for std::setw (which sets the width of the subsequent output). Generally for manipulating output. Also for std::setpreision()
#include <iostream>
#include <climits> // for CHAR_BIT
#include <cstdint> // for fixed with integer std::intN_t
#include <cstddef> // for typedef std::size_t
#include <limits>
#include <typeinfo>

// #pragma GCC diagnostic push
// #pragma GCC diagnostic ignored "-Wmultichar"

// If you want to ensure that a std::int8_t or std::uint8_t object is treated as an integer, you can convert the value to an integer using static_cast:

// double getNumber()
// {
//     std::cout << "Enter a double value: ";

//     double num{};
//     std::cin >> num;

//     return num;
// }

// char getOperator()
// {
//     std::cout << "Enter +, -, *, or /: ";

//     char oper{};
//     std::cin >> oper;

//     return oper;
// }

// void printResult(double firstNum, double secondNum, char sym)
// {
//     if (sym == '+')
//         std::cout << firstNum << " " << sym << " " << secondNum  << " is " << firstNum+secondNum << '\n';
//     else if (sym == '-')
//         std::cout << firstNum << " " << sym << " " << secondNum  << " is " << firstNum-secondNum << '\n';
//     else if (sym == '*')
//         std::cout << firstNum << " " << sym << " " << secondNum  << " is " << firstNum*secondNum << '\n';
//     else if (sym == '/')
//         std::cout << firstNum << " " << sym << " " << secondNum  << " is " << firstNum/secondNum << '\n';
// }

float getHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    float height{};
    std::cin >> height;

    return height;
}

float calcHeight(float height, int time)
{
    float gravity{9.8f};
    float time_sec{static_cast<float>(time)};
    float presentHeight{height - (gravity * time_sec * time_sec / 2.0f)};
    return presentHeight;
}

int main()
{

    float height{getHeight()};

    for (int time = 0; time < 6; time++)
    {
        float presentHeight{calcHeight(height, time)};

        if (presentHeight > 0)
        {
            std::cout << "At " << time << " seconds, the ball is at height: " << presentHeight << "meters\n";
        }
        else
        {
            std::cout << "At " << time << " seconds, the ball is on the ground.\n";
            break;
        }
    }

    // double x{getNumber()};
    // double y{getNumber()};

    // char z {getOperator()};

    // printResult(x,y,z);

    // std::cout << "Enter a single character: ";

    // char ch{};
    // std::cin >> ch;

    // int i{ch};

    // std::cout << "You entered \'" << ch << "\', which has ASCII code " << i << ".\n";

    // int8_t newInt{};
    // std::cin >> newInt; // I enter 35

    // std::cout << newInt << '\n'; // Prints 51 (tutorial said it was meant to. But turns out it didn't): equivalent of '3'

    // int s { -1 };
    // std::cout << static_cast<unsigned int>(s) << '\n'; // prints 4294967295

    // int t { -1 };
    // std::cout << static_cast<uint16_t>(t) << '\n'; // prints 65535

    // char ch{97};
    // std::cout << "Character ch stores an integer value of " << static_cast<int>(ch) << '\n';

    // double x{5.5};
    // std::cout << "The value of x is " << static_cast<int>(x) << '\n';

    // std::cout << typeid(x).name() << '\n';

    // std::cout << "\\This is my first name.\\\n\t\t\t\"And this is my last name!\"\n\'\vWhich do you prefer?\a\'\n";

    // std::cout << "Enter a character: ";
    // char ch{};
    // std::cin.get(ch);

    // std::cout << "You entered this character: " << ch << '\n';

    // std::cin.get(ch);
    // std::cout << "You entered this character: " << ch << '\n';

    // std::cin.get(ch);
    // std::cout << "You entered this character: " << ch << '\n';

    // std::cout << "Enter a number 0 through 9 (inclusive): ";
    // char x{};
    // std::cin >> x;
    // if (x == 2 || x == 3 || x == 5 || x == 7)
    //     std::cout << "The digit is prime!\n";
    // // else if (x<0)
    // //     std::cout << "The value is negative!\n";
    // else
    //     std::cout << "The digit is not prime!\n";

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
