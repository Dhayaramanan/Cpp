#include <iostream>

class Foo
{
private:
    int m_x{};
    int m_y{};

public:
    Foo(int x, int y)
    {
        std::cout << "Foo(" << x << ", " << y << ")\n";
        m_x = x;
        m_y = y;
    }

    void print() const
    {
        std::cout << m_x << " " << m_y << '\n';
    }
};

int main()
{
    Foo foo{6, 7};
    foo.print();

    return 0;
}