#include <cstdint>
#include <iostream>
#include <map>
#include <string>

void print_map(const std::map<std::string, std::uint32_t> &map) {
    for (const auto &[key, val] : map) {
        std::cout << key << ": " << val << '\n';
    }

    std::cout << '\n';
}

int main() {
    // Works like Python's dictionary
    std::map<std::string, std::uint32_t> map{{"Jan", 28}};
    map["Sam"] = 40;
    map["Veronika"] = 24;
    print_map(map);

    map["Veronika"] = 25; // update existing key
    print_map(map);

    if (!map.contains("Sam")) {
        map["Sam"] = 40;
    }
    if (!map.contains("Lisa")) {
        map["Lisa"] = 36;
    }
    print_map(map);

    const auto found{map.find("Lisa")};
    if (found != map.end()) {
        const auto &[key, val]{*found};
        std::cout << key << ": " << val << '\n';
        std::cout << (*found).first << '\n';
    }

    return 0;
}