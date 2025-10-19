#include <cstdint>
#include <iostream>

enum class Status : std::uint8_t {
  Unknown,
  Connected,
  Disconnected,
};

struct User {
  Status status;
  std::uint64_t id;
};

int main() {
  User user1{.status = Status::Connected, .id = 42U};
  std::cout << user1.id << '\n';
  std::cout << static_cast<int>(user1.status) << '\n';

  return 0;
}