#include <iostream>

int main()
{
    std::cout << "Great!\n";
}

// The specific sequence of statements that the CPU executes is called the program’s execution path (or path, for short).

// if constexpr (a variant of the if-statement added in C++23) requires the use of blocks. Thus using blocks ensures consistency between if and if constexpr.

// Use if-else when you only want to execute the code after the first true condition. Use if-if when you want to execute the code after all true conditions.

// When all associated statements return a value, you can always just use if-if since else provides no value.
// e.g. char getFirstMatchingChar(bool a, bool b, bool c)
// {
//     if (a) // always evaluates
//         return 'a'; // returns when if-statement is true
//     if (b) // only evaluates when prior if-statement condition is false
//         return 'b'; // returns when if-statement is true
//     if (c) // only evaluates when prior if-statement condition is false
//         return 'c'; // returns when if-statement is true

//     return 0;
// }

