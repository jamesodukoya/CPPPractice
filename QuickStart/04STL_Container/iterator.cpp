#include <iostream>
#include <iterator>
#include <vector>

template <typename T>
void print_vector(const std::vector<T> &vec) {
    std::cout << "Printing vector values:\n";
    for (const auto v : vec) {
        std::cout << v << '\n';
    }
    std::cout << '\n';
}

int main() {
    std::vector vector{0, 1, 2, 3, 4, 5};

    // Forward iterator
    auto it1{vector.begin()};
    auto it2{vector.end()};
    for (; it1 != it2; ++it1) {
        *it1 = 1;
    }
    print_vector(vector);

    // Bidirectional/reverse iterator
    auto it3{vector.rbegin()};
    auto it4{vector.rend()};
    for (; it3 != it4; ++it3) {
        static std::uint8_t num{10};
        *it3 = num;
        ++num;
    }
    print_vector(vector);

    // Const Forward iterator - read only
    const auto it5{vector.cbegin()};
    const auto it6{vector.cend()};

    // Const reverse iterator - read only
    const auto it7{vector.crbegin()};
    const auto it8{vector.crend()};

    // Shift methods/operators
    auto vec_it{vector.begin()};
    std::advance(vec_it, 2); // -> vec_it += 2
    std::cout << "Vector[2] = " << *vec_it << '\n';

    auto prev{std::prev(vec_it)};
    std::cout << "Prev value: " << *prev << '\n';
    auto next{std::next(vec_it)};
    std::cout << "Next value: " << *next << '\n';

    auto dist1{std::distance(vec_it, vector.end())};
    auto dist2{std::distance(vector.begin(), vec_it)};
    std::cout << "Dist1: " << dist1 << "\tDist2: " << dist2 << '\n';

    return 0;
}