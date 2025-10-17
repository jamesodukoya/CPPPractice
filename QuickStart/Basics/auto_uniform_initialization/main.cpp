#include <cstdint>
#include <iostream>

int main() {
    float a = 10.5F;
    auto c = static_cast<std::int32_t>(a);
    std::cout << c << '\n';
    auto e{10 + 2.7};

    return 0;
}