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