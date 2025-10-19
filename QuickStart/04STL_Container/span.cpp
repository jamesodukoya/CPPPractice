#include <array>
#include <cstdint>
#include <iostream>
#include <span>
#include <vector>

void print_span(std::span<std::uint32_t> span) {
    for (const auto value : span) {
        std::cout << value << '\n';
    }
}

template <typename T>
void print_span_modern(std::span<T> span) {
    for (const auto value : span) {
        std::cout << value << '\n';
    }
}

int main() {
    std::vector<std::uint32_t> vec{1, 2, 3};
    print_span(vec);
    print_span_modern<std::uint32_t>(vec);

    std::array<std::uint16_t, 3U> arr{1, 2, 3};
    // print_span(arr); //type mismatch
    print_span_modern<std::uint16_t>(arr);

    return 0;
}