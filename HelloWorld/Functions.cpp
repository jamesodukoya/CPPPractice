#include <iostream>

int getInteger();

int main()
{
	int x{ getInteger() };
	int y{ getInteger() };

	std::cout << x << " + " << y << " is " << x + y << '\n';
	return 0;
}

// int add(int x, int y);

// int main()
// {
//     std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // compile error
//     return 0;
// }

// int add(int x, int y)
// {
//     return x + y;
// }

// int doubleNumber(int );

// int main(){
//     std::cout << "Enter an integer: ";

//     int input{};
//     std::cin >> input;

//     std::cout << doubleNumber(input) << '\n';

//     return 0;
// }

// int doubleNumber(int x)
// {
//     return x*2;
// }

// int getValueFromUser()
// {
//     std::cout << "Enter an integer: ";

//     int input{};
//     std::cin >> input;
//     return input;
// }

// int main()
// {
//     int num{getValueFromUser()};

//     std::cout << num << " doubled is: " << num*2 << '\n';

//     return EXIT_FAILURE;
// }
