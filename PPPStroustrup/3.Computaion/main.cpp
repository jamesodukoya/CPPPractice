#include <iostream>

int square(int num)
{
    int square = 0;
    for (int i = 0; i < num; ++i)
    {
        square += num;
    }
    return square;
}

int main()
{

    int num = 300;
    std::cout << square(num) << '\n';

    // for (char letter = 'a'; letter <= 'z'; ++letter) // in a for loop, the compiler doesn't care about the return value (post or pre-increment). It cares only about the side effect, which is that "letter" is being incremented or decremented
    // {
    //     std::cout << letter << '\t' << static_cast<int>(letter) << std::endl;
    // }
    // for (char i='A'; i<='Z'; ++i)
    // {
    //     std::cout << i << '\t' << static_cast<int>(i) << std::endl;
    // }

    // char letter = 'a';
    // constexpr int num = static_cast<int>(letter);
    // while (letter <= 'z')
    // {
    //     std::cout << letter << '\t' << static_cast<int>(letter) << std::endl;
    //     ++letter;
    // }
    return 0;
}