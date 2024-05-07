#include <iostream>

class Simple
{
private:
    int m_x{};

public:
    Simple(int x)
        : m_x{ x }
    {
    }

    int getX() const { return m_x; }
    void setX(int x) { m_x = x; }

    // static void setX(Simple* const this, int x) { this->m_x = x; }

    void print() const { std::cout << this->m_x << '\n'; }
};

struct Something
{
    int data;

    void setData(int data)
    {
        this->data = data;
    }

};

int main()
{
    Simple simple{1};
    simple.setX(2);

    simple.print();

    // Simple::setX(&simple, 3);

    Something s;
    s.setData(100);

    std::cout << s.data << '\n';

    return 0;
}