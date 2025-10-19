#include <cstdint>
#include <iostream>
#include <tuple>   // required for tuple
#include <utility> // required for pair

struct Data {
    std::int32_t i;
    float j;
};

std::tuple<std::int32_t, std::string, float> func(const std::int32_t input) {
    return std::make_tuple(input + 1, std::to_string(input + 2), (static_cast<float>(input) + 0.2F));
}

Data func1(const std::int32_t input) {
    return Data{input + 1, (static_cast<float>(input) + 0.2F)};
}

std::pair<std::int32_t, float> func2(const std::int32_t input) {
    return std::make_pair(input + 1, (static_cast<float>(input) + 0.2F));
}

int main() {
    std::pair<std::int32_t, float> pair{1337, 34.3F};
    std::cout << pair.first << '\n';
    std::cout << pair.second << '\n';

    std::tuple<std::int32_t, std::string, float> tuple{1337, "Jan", 34.3F};
    std::cout << std::get<0>(tuple) << '\n';
    std::cout << std::get<1>(tuple) << '\n';
    std::cout << std::get<2>(tuple) << '\n';

    const auto &[age, month, record]{func(42)};
    std::cout << age << '\n';
    std::cout << month << '\n';
    std::cout << record << '\n';

    const auto &[age1, record1]{func1(42)};
    std::cout << age1 << '\n';
    std::cout << record1 << '\n';

    const auto &[age2, record2]{func2(42)};
    std::cout << age2 << '\n';
    std::cout << record2 << '\n';

    return 0;
}