#include <iostream>

// lvalue - has memory address e.g variable
// rvalue - temporary expression without memory address e.g literal or function return value
// A non-const lvalue reference (T&) can only bind to a modifiable lvalue. This is used when a function needs to modify
// an object.

void copy_by_value(int v) {
    std::cout << v << '\n';
}

void copy_by_value_const(const int v) {
    std::cout << v << '\n';
}

void reference(int &v) {
    std::cout << v << '\n';
}

void reference_const(const int &v) {
    auto vee{v};
    vee *= vee;
    std::cout << vee << '\n';
}

int main() {
    int lvalue{2};
    const int lvalue_const{2};

    copy_by_value(lvalue);
    copy_by_value(lvalue_const);
    copy_by_value(2);

    copy_by_value_const(lvalue);
    copy_by_value_const(lvalue_const);
    copy_by_value_const(2);

    reference(lvalue);
    // reference(lvalue_const); // Error
    // reference(2); //Error

    reference_const(lvalue);
    reference_const(lvalue_const);
    reference_const(2);

    return 0;
}