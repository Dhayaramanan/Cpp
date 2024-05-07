#include <iostream>

class foo
{
private:
    int m_x{};
    int m_y{};

public:
    foo(int x, int y)
        : m_x{x}
        , m_y{y}
    {
       std::cout << x << ", " << y << '\n'; 
    }

    void print() const
    {
        std::cout << m_x << ", " << m_y << '\n';
    }
};

int main()
{
    foo f{1, 2};
    f.print();

    return 0;
}