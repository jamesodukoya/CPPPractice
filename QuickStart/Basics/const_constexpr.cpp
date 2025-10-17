#include <cstdint>
#include <iostream>

constexpr long double factorial(const std::uint16_t n) {
    long double result{1};
    for (std::uint16_t i{1}; i <= n; ++i) {
        result *= i;
    }

    return result;
}

int main() {
    constexpr auto fact_5{factorial(static_cast<std::uint16_t>(500))};
    std::cout << fact_5 << '\n';

    return 0;
}