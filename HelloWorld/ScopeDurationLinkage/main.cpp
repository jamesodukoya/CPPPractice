#include <iostream>
#include "foo.h" // for Foo::printHelloThere()
#include "add.h" // for BasicMath::add()
#include "circle.h"
#include "growth.h"

// int Foo::doSomething(int x, int y);

namespace Foo::Goo
{
    int add(int x, int y)
    {
        return x + y;
    }
}

int main()
{

	namespace Active = Foo::Goo; // active now refers to Foo::Goo

	std::cout << Active::add(1, 2) << '\n'; // This is really Foo::Goo::add()

	// std::cout << BasicMath::pi << '\n';
	// std::cout << BasicMath::e << '\n';

	// std::cout << BasicMath::add(4, 3) << '\n';


    // Foo::printHelloThere();

    return 0;
}

// If an identifier inside a namespace is used and no scope resolution is provided, the compiler will first try to find a matching declaration in that same namespace. If no matching identifier is found, the compiler will then check each containing namespace in sequence to see if a match is found, with the global namespace being checked last.
// It’s legal to declare namespace blocks in multiple locations (either across multiple files, or multiple places within the same file). All declarations within the namespace are considered part of the namespace.

