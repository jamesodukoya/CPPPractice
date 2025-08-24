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

// Switch statement example
// void printDigitName(int x)
// {
//     switch (x)
//     {
//     case 1:
//         std::cout << "One";
//         return;
//     case 2:
//         std::cout << "Two";
//         return;
//     case 3:
//         std::cout << "Three";
//         return;
//     default:
//         std::cout << "Unknown";
//         return;
//     }
// }

// The condition in a switch must evaluate to an integral type or be convertible to one!!! Expressions that evaluate to floating point types, strings, and most other non-integral types may not be used here.

// There is no practical limit to the number of case labels you can have, but all case labels in a switch must be unique. Place the default case last in the switch block.

// If the value of the conditional expression does not match any of the case labels, and no default case has been provided, then no cases inside the switch are executed. Execution continues after the end of the switch block.

// A break statement (declared using the break keyword) tells the compiler that we are done executing statements within the switch, and that execution should continue with the statement after the end of the switch block. This allows us to exit a switch-statement without exiting the entire function. Each set of statements underneath a label should end in a break-statement or a return-statement. This includes the statements underneath the last label in the switch.

// Conventionally, labels are simply not indented:
// Preferred version
// void printDigitName(int x)
// {
//     switch (x)
//     {
//     case 1: // not indented from switch statement
//         std::cout << "One";
//         return;
//     case 2:
//         std::cout << "Two";
//         return;
//     case 3:
//         std::cout << "Three";
//         return;
//     default:
//         std::cout << "Unknown";
//         return;
//     }
// }

// Prefer a switch-statement over if-else statements when testing a single expression (with a non-boolean integral type or an enumerated type) for equality against a small set of values.

// If-else is significantly more flexible. Some cases where if or if-else is typically better:
// Testing an expression for comparisons other than equality (e.g. x > 5)
// Testing multiple conditions (e.g. x == 5 && y == 6)
// Determining whether a value is within a range (e.g. x >= 5 && x <= 10)
// The expression has a type that switch doesn’t support (e.g. d == 4.0).
// The expression evaluates to a bool.