#include <array>
#include <cstdint>
#include <iostream>
#include <span>
#include <vector>

// span represents vectors, C-style and C++ arrays
template <typename T>
void print_container(std::span<T> span) {
    for (const auto &val : span) { // referencing val might be overkill here
        std::cout << val << '\n';
    }
}

int main() {
    std::vector<std::int32_t> vec{1, 2, 3, 4, 5};
    std::array<std::uint16_t, 5U> arr{6, 7, 8, 9, 10};
    std::uint64_t c_arr[]{1, 2, 3, 4, 5};

    print_container<std::int32_t>(vec);
    print_container<std::uint16_t>(arr);
    print_container<std::uint64_t>(c_arr);

    return 0;
}