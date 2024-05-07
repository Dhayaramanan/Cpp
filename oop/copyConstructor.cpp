#include <iostream>

class Fraction
{
private:
    int m_numerator{ 0 };
    int m_denominator{ 1 };

public:
    Fraction(int numerator=0, int denominator=1)
        : m_numerator{ numerator }
        , m_denominator{ denominator }
    {
    }

    // Copy Constructor
    Fraction(const Fraction& fraction)
        : m_numerator{ fraction.m_numerator }
        , m_denominator{ fraction.m_denominator }
    {
        std::cout << "Copy Constructor\n";
    }

    void print() const
    {
        std::cout << "Fraction (" << m_numerator << ", " << m_denominator << ")\n";
    }
};

int main()
{
    Fraction f{ 5, 3 };
    Fraction fCopy{ f };

    f.print();
    fCopy.print();

    return 0;
}