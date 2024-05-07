#include <iostream>

class Dollars
{
private:
    int m_dollars{};

public:
    explicit Dollars(int dollars)
        : m_dollars{ dollars }
    {
    }

    int getDollars() const
    {
        return m_dollars;
    }
};

void print(Dollars d)
{
    std::cout << d.getDollars() << '\n';
}

int main(int argc, char const *argv[])
{
    // print(5); will not work
    print(Dollars{5});

    return 0;
}
