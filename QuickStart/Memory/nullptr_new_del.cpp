#include <array>
#include <cstdint>
#include <iostream>

int main() {
    // const std::size_t len{5}; // regular array, size must be const/constexpr
    // std::uint32_t my_array[len]{1, 2, 3, 4, 5};

    std::size_t len1{};
    std::cin >> len1;                          // with a pointer, the size of the array doesn't need to be const
    auto *heap_array{new std::uint32_t[len1]}; // is allocated on the heap, not stack
    if (heap_array != nullptr) {               // checks if prior heap allocation didn't fail
        for (std::size_t i{0}; i < len1; ++i) {
            heap_array[i] = static_cast<std::uint32_t>(i);
        }

        for (std::size_t i{0}; i < len1; ++i) {
            std::cout << heap_array[i] << '\n';
        }
    }

    delete[] heap_array; // free heap memory
    heap_array = nullptr;

    // false value of pointer:: pointer == nullptr
    // true value of pointer:: pointer != nullptr
    if (heap_array) {
        std::cout << heap_array[1] << '\n';
    }

    return 0;
}