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

// Be careful not to “terminate” your if-statement with a semicolon, otherwise the statement(s) you wanted to execute conditionally will execute unconditionally instead (even if they are inside a block).

// You can use PASS as a null statement like so:
// #define PASS

// void foo(int x, int y)
// {
//     if (x > y)
//         PASS;
//     else
//         PASS;
// }

// To use a constexpr-if-statement, we add the constexpr keyword after the if. Favor constexpr if statements over non-constexpr if statements when the conditional is a constant expression. For optimization purposes, modern compilers will generally treat non-constexpr if-statements that have constexpr conditionals as if they were constexpr-if-statements. However, they are not required to do so.



