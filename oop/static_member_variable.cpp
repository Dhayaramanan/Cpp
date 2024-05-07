#include <iostream>

struct Something
{
    static int s_value;
};

int Something::s_value = 1;

int main()
{
    Something first{};
    Something second{};

    first.s_value = 1;
    ++second.s_value;

    std::cout << first.s_value << second.s_value << '\n';

    std::cout << Something::s_value << '\n';

    return 0;
}