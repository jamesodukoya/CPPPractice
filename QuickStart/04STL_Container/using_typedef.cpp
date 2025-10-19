#include <array>
#include <iostream>
#include <span>
#include <vector>

// C style
typedef std::vector<std::int8_t> ByteVector;

// C++ style
using ByteVector1 = std::vector<std::int8_t>;

template <typename T>
using VecOfIntegers = std::vector<T>;

template <typename T>
void print_container(std::span<T> span) {
    for (const auto val : span) {
        std::cout << val << '\n';
    }
}

int main() {
    auto my_bytes = ByteVector1{1, 0, 0, 1};
    auto my_vec = VecOfIntegers<std::int32_t>{1, 2, 3, 4, 5};
    auto my_arr = std::array<std::uint16_t, 5U>{1, 2, 3, 4, 5};
    std::uint64_t my_c_arr[] = {1, 2, 3, 4, 5};

    print_container<std::int8_t>(my_bytes);
    print_container<std::int32_t>(my_vec);
    print_container<std::uint16_t>(my_arr);
    print_container<std::uint64_t>(my_c_arr);

    return 0;
}