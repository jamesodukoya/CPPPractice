#include <bitset> // for std::bitset
#include <iostream>

[[maybe_unused]] constexpr std::bitset<8> mybitset{}; // 8 bits in size means room for 8 flags

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits)
{
    std::bitset<4> newbits{(bits << 1)|(bits>>3)};
    return newbits;
}

int main()
{

    // Exercise 2
    std::bitset<4> bits1{0b0001};
    std::cout << rotl(bits1) << '\n';

    std::bitset<4> bits2{0b1001};
    std::cout << rotl(bits2) << '\n';

    // Bitwise Assignment Operators // There is no bitwise NOT assignment operator. This is because the other bitwise operators are binary, but bitwise NOT is unary
    // std::bitset<4> bits{0b0100};
    // bits >>= 1;
    // std::cout << bits << '\n';

    // Bitwise XOR operator //Bitwise XOR sets the resulting bit to true when the paired bits are different (one is a 0 and the other a 1).
    //  std::cout << (std::bitset<4>{ 0b0110 } ^ std::bitset<4>{ 0b0011 }) << '\n';

    // Bitwise AND operator
    //  std::cout << (std::bitset<4>{ 0b0101 } & std::bitset<4>{ 0b0110 }) << '\n';
    //  std::cout << (std::bitset<4>{ 0b0001 } & std::bitset<4>{ 0b0011 } & std::bitset<4>{ 0b0111 }) << '\n';

    // Bitwise OR operator
    // std::cout << (std::bitset<4>{ 0b0101 } | std::bitset<4>{ 0b0110 }) << '\n';
    // std::cout << (std::bitset<4>{ 0b0111 } | std::bitset<4>{ 0b0011 } | std::bitset<4>{ 0b0001 }) << '\n';

    // Bitwise NOT operator
    // std::bitset<4> b4{ 0b100 }; // b4 is 0100
    // std::bitset<8> b8{ 0b100 }; // b8 is 0000 0100

    // std::cout << "Initial values:\n";
    // std::cout << "Bits: " << b4 << ' ' << b8 << '\n';
    // std::cout << "Values: " << b4.to_ulong() << ' ' << b8.to_ulong() << "\n\n"; /// Converts it to unsigned long

    // b4 = ~b4; // flip b4 to 1011
    // b8 = ~b8; // flip b8 to 1111 1011

    // std::cout << "After bitwise NOT:\n";
    // std::cout << "Bits: " << b4 << ' ' << b8 << '\n';
    // std::cout << "Values: " << b4.to_ulong() << ' ' << b8.to_ulong() << '\n';

    // Left and right shift
    // std::bitset<4> x{0b0011};
    // std::cout << (x<<2) << '\n';

    // std::bitset<16> bits{ 0b0000'1101'0000'1101 };
    // std::cout << bits.size() << " bits are in the bitset\n";
    // std::cout << bits.count() << " bits are set to true\n";

    // std::cout << std::boolalpha;
    // std::cout << "All bits are true: " << bits.all() << '\n';
    // std::cout << "Some bits are true: " << bits.any() << '\n';
    // std::cout << "No bits are true: " << bits.none() << '\n';

    // std::bitset<8> bits{0b0000'0101}; // we need 8 bits, start with bit pattern 0000 0101
    // bits.set(3); // set bit position 3 to 1 (now we have 0000 1101)
    // bits.flip(4); // flip bit 4 (now we have 0001 1101)
    // bits.reset(4); // set bit 4 back to 0 (now we have 0000 1101)

    // std::cout << "All the bits: " << bits << '\n';
    // std::cout << "Bit 3 has value: " << bits.test(3) << '\n';
    // std::cout << "Bit 4 has value: " << bits.test(4) << '\n';

    return 0;
}
