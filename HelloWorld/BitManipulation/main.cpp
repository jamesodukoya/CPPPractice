#include <bitset> // for std::bitset
#include <iostream>
#include <cstdint>


[[maybe_unused]] constexpr std::bitset<8> mybitset{}; // 8 bits in size means room for 8 flags

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits)
{
    std::bitset<4> newbits{(bits << 1) | (bits >> 3)};
    return newbits;
}

int main()
{

    [[maybe_unused]] constexpr std::uint8_t option_viewed{ 0x01 };
    [[maybe_unused]] constexpr std::uint8_t option_edited{ 0x02 };
    [[maybe_unused]] constexpr std::uint8_t option_favorited{ 0x04 };
    [[maybe_unused]] constexpr std::uint8_t option_shared{ 0x08 };
    [[maybe_unused]] constexpr std::uint8_t option_deleted{ 0x10 };

    std::uint8_t myArticleFlags{ option_favorited };

    myArticleFlags |= option_viewed;

    std::cout << std::bitset<8>{ myArticleFlags } << '\n';

    myArticleFlags &= static_cast<std::uint8_t>(~option_favorited);

    std::cout << std::bitset<8>{ myArticleFlags } << '\n';

    // std::cout << "Has the article been deleted? " << std::boolalpha << static_cast<bool>((myArticleFlags & option_deleted) >> 4) << '\n';


    // [[maybe_unused]] constexpr std::uint8_t mask0{0b0000'0001}; // represents bit 0
    // [[maybe_unused]] constexpr std::uint8_t mask1{0b0000'0010}; // represents bit 1
    // [[maybe_unused]] constexpr std::uint8_t mask2{0b0000'0100}; // represents bit 2
    // [[maybe_unused]] constexpr std::uint8_t mask3{0b0000'1000}; // represents bit 3
    // [[maybe_unused]] constexpr std::uint8_t mask4{0b0001'0000}; // represents bit 4
    // [[maybe_unused]] constexpr std::uint8_t mask5{0b0010'0000}; // represents bit 5
    // [[maybe_unused]] constexpr std::uint8_t mask6{0b0100'0000}; // represents bit 6
    // [[maybe_unused]] constexpr std::uint8_t mask7{0b1000'0000}; // represents bit 7

    // std::uint8_t flags{ 0b0011'0101 }; // 8 bits in size means room for 8 flags


    // // To toggle (flip) a bit state (from 0 to 1 or from 1 to 0), we use Bitwise XOR:
    // std::cout << "bit 2 is " << (static_cast<bool>(flags & mask2) ? "on\n" : "off\n");
    // flags ^= mask2; // flip bit 2
    // std::cout << "bit 2 is " << (static_cast<bool>(flags & mask2) ? "on\n" : "off\n");
    // flags ^= mask2; // flip bit 2
    // std::cout << "bit 2 is " << (static_cast<bool>(flags & mask2) ? "on\n" : "off\n");



    // To reset (clear) a bit (to value 0), we use Bitwise AND and Bitwise NOT together
    // std::cout << "bit 2 is " << (static_cast<bool>(flags & mask2) ? "on\n" : "off\n");

    // std::cout << "bit 4 is " << (static_cast<bool>(flags & mask4) ? "on\n" : "off\n");

    // std::cout << "bit 5 is " << (static_cast<bool>(flags & mask5) ? "on\n" : "off\n");

    // flags &= static_cast<std::uint8_t>(~mask2); // turn off bit 2

    // flags &= static_cast<std::uint8_t>(~(mask4|mask5)); // turns off bits 4 and 5 at the same time

    // std::cout << "bit 2 is " << (static_cast<bool>(flags & mask2) ? "on\n" : "off\n");

    // std::cout << "bit 4 is " << (static_cast<bool>(flags & mask4) ? "on\n" : "off\n");

    // std::cout << "bit 5 is " << (static_cast<bool>(flags & mask5) ? "on\n" : "off\n");


    // Setting a bit
    // std::uint8_t flags{ 0b0000'0101 }; // 8 bits in size means room for 8 flags

    // std::cout << "bit 1 is " << (static_cast<bool>(flags & mask1) ? "on\n" : "off\n");

    // flags |= mask1; // turn on bit 1

    // std::cout << "bit 1 is " << (static_cast<bool>(flags & mask1) ? "on\n" : "off\n");

    // For checking whether a bit is on or off
    // std::uint8_t flags{0b0000'0101}; // 8 bits in size means room for 8 flags
    // std::cout << "Bit 0 is " << (static_cast<bool>(flags&mask0)?"on\n":"off\n");
    // std::cout << "Bit 5 is " << (static_cast<bool>(flags&mask5)?"on\n":"off\n");

    // std::cout << static_cast<int>(mask7) << '\n';

    // Exercise 2
    // std::bitset<4> bits1{0b0001};
    // std::cout << rotl(bits1) << '\n';

    // std::bitset<4> bits2{0b1001};
    // std::cout << rotl(bits2) << '\n';

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
