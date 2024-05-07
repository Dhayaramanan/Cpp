#include <iostream>

struct Employee
{
    int id{};
    int age{};
    double wage{};
};

int main()
{
    Employee joe{};
    joe.id = 14;
    joe.age = 32;
    joe.wage = 60000.0;

    Employee frank{};
    frank.id = 15;
    frank.age = 28;
    frank.age = 48000.0;

    std::cout << joe.age << '\n';

    if (joe.wage > frank.wage)
        std::cout << "Joe makes more money\n";
    else if (frank.wage > joe.wage)
        std::cout << "Frank makes more money\n";
    else
        std::cout << "Both makes same amount of money";

    return 0;
}