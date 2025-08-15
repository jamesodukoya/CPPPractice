#include <iostream>
#include "foo.h"

void print() // this print() lives in the global namespace
{
	std::cout << " there\n";
}

namespace Foo // define a namespace called Foo
{
    void print() // this print() lives in the Foo namespace
	{
		std::cout << "Hello";
	}

	void printHelloThere()
	{
		print();   // calls print() in Foo namespace
		::print(); // calls print() in global namespace
	}
}
