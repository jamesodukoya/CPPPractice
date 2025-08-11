#include <bitset> // for std::bitset
#include <iostream>

[[maybe_unused]] constexpr std::bitset<8> mybitset {}; // 8 bits in size means room for 8 flags

int main()
{
    std::bitset<16> bits{ 0b0000'1101'0000'1101 };
    std::cout << bits.size() << " bits are in the bitset\n";
    std::cout << bits.count() << " bits are set to true\n";

    std::cout << std::boolalpha;
    std::cout << "All bits are true: " << bits.all() << '\n';
    std::cout << "Some bits are true: " << bits.any() << '\n';
    std::cout << "No bits are true: " << bits.none() << '\n';

    // std::bitset<8> bits{0b0000'0101}; // we need 8 bits, start with bit pattern 0000 0101
    // bits.set(3); // set bit position 3 to 1 (now we have 0000 1101)
    // bits.flip(4); // flip bit 4 (now we have 0001 1101)
    // bits.reset(4); // set bit 4 back to 0 (now we have 0000 1101)

    // std::cout << "All the bits: " << bits << '\n';
    // std::cout << "Bit 3 has value: " << bits.test(3) << '\n';
    // std::cout << "Bit 4 has value: " << bits.test(4) << '\n';

    return 0;
}
