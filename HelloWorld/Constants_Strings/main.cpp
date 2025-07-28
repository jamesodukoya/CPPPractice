#include <bitset> // for std::bitset
#include <iostream>
#include <typeinfo>

int main()
{

    // std::bitset<8> means we want to store 8 bits
	std::bitset<8> bin1{ 0b1100'0101 }; // binary literal for binary 1100 0101
	std::bitset<8> bin2{ 0xC5 }; // hexadecimal literal for binary 1100 0101

    long long unsigned int bin3 {45363};
    std::bitset<16> bin4{bin3};

    std::cout << bin4 << '\n';

	std::cout << bin1 << '\n' << bin2 << '\n';
	std::cout << std::bitset<4>{ 0b1010 } << '\n'; // create a temporary std::bitset and print it


    // int x{24675};
    // std::cout << std::hex << x << '\n';
    // std::cout << x << '\n'; // now hexadecimal

    // std::cout << std::oct << x << '\n'; // octal
    // std::cout << std::dec << x << '\n'; // return to decimal
    // std::cout << x << '\n'; // decimal

    return 0;
}
