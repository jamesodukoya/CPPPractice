#include <cstdint>
#include <iostream>
#include <vector>

int main() {
    std::vector<std::int32_t> vec_empty{};
    std::vector<std::int32_t> vec{1, 2, 3, 4, 5};
    std::cout << "C-style Loop:\n";
    for (std::size_t i{0}; i < vec.size(); ++i) {
        std::cout << vec[i] << '\n';
    }

    std::cout << "\nC++ Ranged For Loop:\n";
    for (const auto value : vec) { // read only, makes a copy
        std::cout << value << '\n';
    }

    for (auto &value : vec) { // read and write
        value *= 2;
    }

    for (const auto value : vec) { // read and print modified values
        std::cout << value << '\n';
    }

    // init with a defined no of items with the same value
    std::cout << "\nZero init 3 Elements: \n";
    std::vector<std::int32_t> vec2(3, vec[0]);
    for (const auto value : vec2) {
        std::cout << value << '\n';
    }

    std::vector<std::int32_t> vec3{};
    vec3.push_back(10); // insert int at the end of the vector
    vec3.push_back(22);
    std::cout << "\nPushed 10 and 22 to the vector: \n";
    for (const auto value : vec3) {
        std::cout << value << '\n';
    }

    vec3.pop_back();
    std::cout << "\nRemoved the last element: \n";
    for (const auto value : vec3) {
        std::cout << value << '\n';
    }

    auto first{vec2.begin()};
    auto last{vec2.end()};

    std::cout << "\nUsing Begin and End Iterators: \n";
    for (; first != last; ++first) {
        std::cout << *first << '\n';
    }

    std::cout << "\nInserted 100 at index 3: \n";
    vec2.insert(vec2.begin() + 3, 100);
    for (const auto value : vec2) {
        std::cout << value << '\n';
    }

    return 0;
}