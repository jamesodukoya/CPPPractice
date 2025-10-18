#include <cstdint>
#include <iostream>

int main() {
    std::uint32_t my_age{30U};
    std::cout << &my_age << '\n';

    std::uint32_t *pointer_to_age{&my_age};
    std::cout << &pointer_to_age << '\n';

    return 0;
}