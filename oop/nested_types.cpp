#include <iostream>

class Fruit
{
public:
    enum Type
    {
        apple,
        orange,
        banana,
    };

private:
    Type m_type{};
    int m_percentageEaten{0};

public:
    Fruit(Type type)
        : m_type{ type }
    {
    }

    Type getType() { return m_type; }
    int getPercentageEaten() { return m_percentageEaten; }

    bool isApple() { return m_type == apple; }
};


int main()
{
    Fruit apple{ Fruit::apple };

    if (apple.getType() == Fruit::apple)
        std::cout << "I am an apple\n";
    else
        std::cout << "I am something else\n";

    return 0;
}