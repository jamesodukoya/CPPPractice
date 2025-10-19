#include <array> // for C++ array
#include <cstdint>
#include <iostream>

// C-style array decays to a pointer, can't track length
void print_array_values(const auto my_array[], const auto len) {
    for (std::uint16_t i = 0; i < len; ++i) {
        std::cout << my_array[i] << '\n';
    }
}

// C++ style array, uses a .size() method to keep track of length
void print_array_values1(const auto &my_array) { // Subtlely introduce reference values
    for (std::uint16_t i = 0; i < my_array.size(); ++i) {
        std::cout << my_array[i] << '\n';
    }
}

int main() {
    constexpr auto len{5U};
    constexpr std::uint16_t my_array[len]{}; // Length must be known at compile time, C-style
    print_array_values(my_array, len);

    constexpr std::array<std::uint16_t, len> my_array1{6, 7, 8, 9, 10}; // C++ style array
    print_array_values1(my_array1);

    constexpr std::array<std::uint16_t, 6U> my_array2{6, 7, 8, 9, 10, 13}; // C++ style array
    print_array_values1(my_array2);

    return 0;
}