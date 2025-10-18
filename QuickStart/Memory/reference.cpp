#include <array>
#include <cstdint>
#include <iostream>

void print_array_values1(const auto& my_array) { // Introduce reference values, doesn't make copies, used especially with function parameters with bigger data types
    std::cout << &my_array << '\n';              // Memory address of variable
    for (std::uint16_t i = 0; i < my_array.size(); ++i) {
        std::cout << my_array[i] << '\n';
    }
}

int main() {
    constexpr auto len{6U};

    constexpr std::array<std::uint16_t, len> my_array2{6, 7, 8, 9, 10, 13}; // C++ style array
    std::cout << &my_array2 << '\n';
    print_array_values1(my_array2);

    return 0;
}