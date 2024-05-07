#include <iostream>
#include <string>
#include <string_view>

class Employee
{
private:
    std::string m_name{};
    int m_id{0};

public:
    // not allowed to do any initialization itself
    Employee(std::string_view name)
        : Employee{name, 0}
    {
    }

    Employee(std::string_view name, int id)
        : m_name{name}
        , m_id{id}
    {
        std::cout << "Employee " << m_name << " was created!";
    }
};

int main()
{
    Employee e1{"James"};
    Employee e2{"Dave", 2};

    return 0;
}