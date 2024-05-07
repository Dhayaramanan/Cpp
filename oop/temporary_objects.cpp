#include <iostream>

class IntPair
{
private:
    int m_x{};
    int m_y{};

public:
    IntPair(int x, int y)
        : m_x{x}
        , m_y{y}
    {
    }

    int x() const { return m_x; }
    int y() const { return m_y; }
};

void print(IntPair p)
{
    std::cout << "(" << p.x() << ", " << p.y() << ")\n";
}

int main()
{
    IntPair p{3, 4};
    print(p);

    print(IntPair{1, 2}); // temp object created and destroyed

    return 0;
}
