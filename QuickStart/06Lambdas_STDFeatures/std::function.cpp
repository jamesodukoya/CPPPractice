// #include <functional>
// #include <iostream>
// #include <vector>

// int f(int arg) {
//     std::cout << arg << '\n';

//     return ++arg;
// }

// int new_approach2(std::function<int(int)> func) {
//     return func(2);
// }

// int main() {
//     auto param = int{1};

//     // Old C-style approach
//     int (*old_approach)(int);
//     old_approach = f;
//     old_approach(2);

//     // C++ approach
//     auto new_approach = std::function{f};
//     auto result = new_approach(param);

//     new_approach2(f);

//     const int threshold = 2;
//     auto fns = std::vector<std::function<bool(const int)>>{
//         [&threshold](const int v) { return v > threshold; },  [&threshold](const int v) { return v < threshold; },
//         [&threshold](const int v) { return v == threshold; }, [&threshold](const int v) { return v != threshold; },
//         [&threshold](const int v) { return v >= threshold; }, [&threshold](const int v) { return v <= threshold; },
//     };

//     // auto fns = std::vector<bool (*)(const int)>{
//     //     [](const int v) { return v > 2; },
//     //     [](const int v) { return v < 2; },
//     //     [](const int v) { return v == 2; },
//     //     [](const int v) { return v != 2; },
//     //     [](const int v) { return v >= 2; },
//     //     [](const int v) { return v <= 2; },
//     // };

//     for (const auto &fn : fns) {
//         std::cout << std::boolalpha << fn(1) << '\n';
//     }

//     return 0;
// }

// Prefer Gemini's example

#include <iostream>
// We need to include the <functional> header to use std::function.
#include <functional>
#include <vector>

// This is a normal, regular function that takes two integers and returns their product.
// It's one of the three types of "callables" we will use.
int multiply(int a, int b) {
    return a * b;
}

// This is a "function object," also known as a "functor."
// It's a struct (or class) that acts like a function because it has a special
// operator() method. This is the second type of callable.
struct Power {
    int operator()(int a, int b) {
        int result = 1;
        for (int i = 0; i < b; ++i)
            result *= a;
        return result;
    }
};

// This function takes two integers and a `std::function` as arguments.
// `std::function` is a flexible "wrapper" that can hold any kind of callable
// (like a regular function, a functor, or a lambda) as long as it matches the
// signature `int(int, int)`, meaning it takes two integers and returns an integer.
void execute_operation(int x, int y, const std::function<int(int, int)> &op) {
    // It's good practice to check if the std::function actually holds something
    // before trying to call it.
    if (op) {
        // Here, we call whatever operation was passed in (`op`) with the values x and y.
        std::cout << "Result: " << op(x, y) << '\n';
    } else {
        std::cout << "Operation is empty!\n";
    }
}

int main() {
    // This is a local variable in our main function.
    int factor = 10;

    // This is a "lambda function." It's a quick, unnamed function we can create on the fly.
    // [factor] is the "capture clause." It lets the lambda "capture" the `factor`
    // variable from the surrounding scope so it can use it.
    // This is our third type of callable.
    auto add_with_factor = [factor](int a, int b) { return a + b + factor; };

    // Here, we create three std::function objects. Each one is a "box" that
    // can hold any function that takes two ints and returns an int.
    // We put our three different types of callables into these boxes.

    // op1 holds our regular 'multiply' function.
    std::function<int(int, int)> op1 = multiply;
    // op2 holds an instance of our 'Power' function object.
    std::function<int(int, int)> op2 = Power{};
    // op3 holds our lambda function.
    std::function<int(int, int)> op3 = add_with_factor;

    // Now, we can pass all three different callable types to the SAME function,
    // because std::function gives them a common, uniform interface.

    // This will call the 'multiply' function.
    execute_operation(5, 3, op1); // Result: 15
    // This will call the 'Power' function object.
    execute_operation(5, 3, op2); // Result: 125
    // This will call our lambda function, which uses the captured 'factor' of 10.
    execute_operation(5, 3, op3); // Result: 18 (5 + 3 + 10)
}