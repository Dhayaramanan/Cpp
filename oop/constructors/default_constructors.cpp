#include <iostream>

class Foo
{
private:
    int m_x{};
    int m_y{};

public:
    // Foo()
    // {
    //     std::cout << "Foo default constructor\n";
    // }

    
    // Foo() = default;

    Foo(int x = 10, int y = 20)
        : m_x{x}
        , m_y{y}
    {
        std::cout << "Foo(" << m_x << ", " << m_y << ") constructed\n";
    }
};

int main()
{
    Foo foo1{};
    Foo foo2{6, 7};

    return 0;
}