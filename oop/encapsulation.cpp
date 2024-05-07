#include <iostream>
#include <string_view>

class Employee
{
    std::string m_name{"John"};
public:
    void setName(std::string_view name)
    {
        m_name = name;
    }

    char firstInitial() const
    {
        return m_name.front();
    }

    void print() const
    {
        std::cout << "Employee " << m_name << " has first initial " << firstInitial() << '\n';
    }
};

int main(int argc, char const *argv[])
{
    std::string_view sv{"Hello World"};
    std::cout << sv.length();

    Employee em{};
    Employee em2{};
    em2.setName("Mark");

    em.print();
    em2.print();

    return 0;
}
