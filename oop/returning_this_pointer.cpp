#include <iostream>

class Calc
{
private:
    int m_value{};

public:
    Calc& add(int x) { m_value += x; return *this; }
    Calc& sub(int x) { m_value -= x; return *this; }
    Calc& mul(int x) { m_value *= x; return *this; }
    Calc& div(int x) { m_value /= x; return *this; }

    void print() const
    {
        std::cout << m_value << '\n';
    }

    void reset()
    {
        *this = {};
    }
};

int main()
{
    Calc cal{};

    cal.add(5).sub(2).mul(3).div(9);

    cal.print();

    cal.reset();

    cal.print();

    return 0;
}