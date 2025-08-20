#include <iostream>
// #include "foo.h" // for Foo::printHelloThere()
// #include "add.h" // for BasicMath::add()
// #include "circle.h"
// #include "growth.h"

// int Foo::doSomething(int x, int y);

// namespace Foo::Goo
// {
//     int add(int x, int y)
//     {
//         return x + y;
//     }
// }

// Global variables
int g_x;       // no explicit initializer (zero-initialized by default)
int g_y {};    // value initialized (resulting in zero-initialization)
int g_z { 1 }; // list initialized with specific value
const int g_x;     // error: constant variables must be initialized
constexpr int g_w; // error: constexpr variables must be initialized

const int g_y { 1 };     // const global variable g_y, initialized with a value
constexpr int g_z { 2 }; // constexpr global variable g_z, initialized with a value

int main()
{

	std::cout << "Enter an integer: ";
	int smaller{};
	std::cin >> smaller;

	std::cout << "Enter a larger integer: ";
	int larger{};
	std::cin >> larger;

	if (smaller > larger)
	{
		std::cout << "Swapping the values\n";
		int temp{};
		temp = smaller;
		smaller = larger;
		larger = temp;
	} // temp dies here

	std::cout << "The smaller value is " << smaller << '\n';
	std::cout << "The larger value is " << larger << '\n';

	// namespace Active = Foo::Goo; // active now refers to Foo::Goo

	// std::cout << Active::add(1, 2) << '\n'; // This is really Foo::Goo::add()

	// std::cout << BasicMath::pi << '\n';
	// std::cout << BasicMath::e << '\n';

	// std::cout << BasicMath::add(4, 3) << '\n';

	// Foo::printHelloThere();

	return 0;
} // smaller and larger die here

// A variable’s scope determines where the variable is accessible within the source code. Duration defines the rules that govern when a variable is created and destroyed. A variable’s lifetime is the actual time between its creation and destruction.

// If an identifier inside a namespace is used and no scope resolution is provided, the compiler will first try to find a matching declaration in that same namespace. If no matching identifier is found, the compiler will then check each containing namespace in sequence to see if a match is found, with the global namespace being checked last.
// It’s legal to declare namespace blocks in multiple locations (either across multiple files, or multiple places within the same file). All declarations within the namespace are considered part of the namespace.
// If a variable is only used within a nested block, it should be defined inside that nested block
// Avoid creating new blocks whose only purpose is to limit the scope of variables.

// Variables declared inside a namespace are also global variables. Prefer defining global variables inside a namespace rather than in the global namespace.

// Const and constexpr global variables have internal linkage by default (and thus don’t need the static keyword -- if it is used, it will be ignored).

// Functions default to external linkage (which we’ll cover in the next lesson), but can be set to internal linkage via the static keyword:

// In modern C++, use of the static keyword for giving identifiers internal linkage is falling out of favor. Unnamed namespaces can give internal linkage to a wider range of identifiers (e.g. type identifiers), and they are better suited for giving many identifiers internal linkage.

// To make a global variable external (and thus accessible by other files), we can use the extern keyword to do so:

// int g_x { 2 }; // non-constant globals are external by default (no need to use extern)

// extern const int g_y { 3 }; // const globals can be defined as extern, making them external
// extern constexpr int g_z { 3 }; // constexpr globals can be defined as extern, making them external (but this is pretty useless, see the warning in the next section)

// For variables, creating a forward declaration is also done via the extern keyword (with no initialization value).

// extern int g_x;       // this extern is a forward declaration of a variable named g_x that is defined somewhere else
// extern const int g_y; // this extern is a forward declaration of a const variable named g_y that is defined somewhere else

// If you want to define an uninitialized non-const global variable, do not use the extern keyword, otherwise C++ will think you’re trying to make a forward declaration for the variable.

// Although constexpr variables can be given external linkage via the extern keyword, they can not be forward declared as constexpr. This is because the compiler needs to know the value of the constexpr variable (at compile time). If that value is defined in some other file, the compiler has no visibility on what value was defined in that other file.

// However, you can forward declare a constexpr variable as const, which the compiler will treat as a runtime const. This isn’t particularly useful.

// Only use extern for global variable forward declarations or const global variable definitions.
// Do not use extern for non-const global variable definitions (they are implicitly extern).

// By far the biggest reason non-const global variables are dangerous is because their values can be changed by any function that is called, and there is no easy way for the programmer to know that this will happen.

// Use local variables instead of global variables whenever possible.

// Inline expansion
// int main()
// {
//     std::cout << ((5 < 6) ? 5 : 6) << '\n';
//     std::cout << ((3 < 2) ? 3 : 2) << '\n';
//     return 0;
// }

// Inline expansion is best suited to simple, short functions (e.g. no more than a few statements), especially cases where a single function call can be executed more than once (e.g. function calls inside a loop).

// Modern optimizing compilers make the decision about when functions should be expanded inline. Do not use the inline keyword to request inline expansion for your functions.

// In modern C++, the term inline has evolved to mean “multiple definitions are allowed”. Thus, an inline function is one that is allowed to be defined in multiple translation units (without violating the ODR). Inline functions are typically defined in header files, where they can be #included into the top of any code file that needs to see the full definition of the identifier. This ensures that all inline definitions for an identifier are identical.

// Avoid the use of the inline keyword unless you have a specific, compelling reason to do so (e.g. you’re defining those functions or variables in a header file).

// C++17 introduces inline variables, which are variables that are allowed to be defined in multiple files.