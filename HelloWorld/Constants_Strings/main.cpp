#include <bitset> // for std::bitset
#include <iostream>
#include <typeinfo>
#include <string>
#include <string_view>

std::string getName(int person)
{
    std::cout << "Enter the name of person #" << person << ": ";
    std::string name{};

    std::getline(std::cin >> std::ws, name);

    return name;
}

int getAge(std::string_view name)
{
    std::cout << "Enter the age of " << name << ": ";
    int age{};

    std::cin >> age;

    return age;
}

void compareAges(std::string_view name1, std::string_view name2, int age1, int age2)
{
    if (age1 > age2)
    {
        std::cout << name1 << " (age " << age1 << ") is older than " << name2 << " (age " << age2 << ").\n";
    } else
    {
        std::cout << name2 << " (age " << age2 << ") is older than " << name1 << " (age " << age1 << ").\n";
    }
}

int main()
{

    int personNum{1};
    const std::string name1{getName(personNum)};
    const int age1{getAge(name1)};

    personNum = 2;
    const std::string name2{getName(personNum)};
    const int age2{getAge(name2)};
    
    compareAges(name1, name2, age1, age2);

    // constexpr std::string_view s{"Hello world!"};
    // printString(static_cast<std::string>(s));

    // std::cout << s;

    // std::cout << "Enter your full name: ";
    // std::string name{};
    // std::getline(std::cin >> std::ws, name);

    // std::cout << "Enter your age: ";
    // int age{};
    // std::cin >> age;

    // std::cout << "Your age + length of name is: " << static_cast<int>(name.length()) + age << '\n';

    // std::cout << "Enter your favorite color: ";
    // std::string color{};
    // std::getline(std::cin, color);

    // std::cout << "Your name is " << name << " and your favorite color is " << color << '\n';

    // std::string name {"Dara-_45"};

    // std::cout << name << '\n';

    // int expr {};
    // std::cin >> expr;
    // constexpr int x{5};
    // std::cout << expr << '\n';
    // std::cout << x << '\n';

    // // std::bitset<8> means we want to store 8 bits
    // std::bitset<8> bin1{ 0b1100'0101 }; // binary literal for binary 1100 0101
    // std::bitset<8> bin2{ 0xC5 }; // hexadecimal literal for binary 1100 0101

    // long long unsigned int bin3 {45363};
    // std::bitset<16> bin4{bin3};

    // std::cout << bin4 << '\n';

    // std::cout << bin1 << '\n' << bin2 << '\n';
    // std::cout << std::bitset<4>{ 0b1010 } << '\n'; // create a temporary std::bitset and print it

    // int x{24675};
    // std::cout << std::hex << x << '\n';
    // std::cout << x << '\n'; // now hexadecimal

    // std::cout << std::oct << x << '\n'; // octal
    // std::cout << std::dec << x << '\n'; // return to decimal
    // std::cout << x << '\n'; // decimal

    return 0;
}
