#include <iostream>

enum class Status : uint8_t
{
    Unknown,
    Connected,
    Disconnected,
};

enum class UserPermission
{
    Unknown,
    User,
    Admin,
};

void printStatus(Status s1){
    using enum Status;
    switch (s1)
    {
    case Unknown:
        std::cout << "What's going on, man?!" << '\n';
        break;
    case Disconnected:
        std::cout << "Let's go, man!" << '\n';
        break;
    case Connected:
        std::cout << "Don't go, man!" << '\n';
        break;
    }
}

int main()
{
    Status s1 = Status::Disconnected;
    // UserPermission s2 = UserPermission::Unknown;

    switch (s1)
    {
    case Status::Unknown:
    {
        std::cout << "What's going on, man?!" << '\n';
        break;
    }
    case Status::Connected:
    {
        std::cout << "Let's go, man!" << '\n';
        break;
    }
    case Status::Disconnected:
    {
        std::cout << "Don't go, man!" << '\n';
        break;
    }
    }

    switch (static_cast<int>(s1))
    {
    case 0:
    {
        std::cout << "What's going on, man?!" << '\n';
        break;
    }
    case 1:
    {
        std::cout << "Let's go, man!" << '\n';
        break;
    }
    case 2:
    {
        std::cout << "Don't go, man!" << '\n';
        break;
    }
    }

    using enum Status;
    switch (s1)
    {
    case Unknown:
        std::cout << "What's going on, man?!" << '\n';
        break;
    case Disconnected:
        std::cout << "Let's go, man!" << '\n';
        break;
    case Connected:
        std::cout << "Don't go, man!" << '\n';
        break;
    }

    printStatus(s1);

    return 0;
}