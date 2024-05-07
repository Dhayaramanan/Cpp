#include <iostream>
#include <string>
#include <string_view>

class Employee
{
private:
    std::string m_name{};

public:
    Employee(std::string_view name)
        : m_name{ name }
    {
    }

    const std::string& getName() const
    {
        return m_name;
    }
};

void printEmployee(Employee e)
{
    std::cout << e.getName() << '\n';
}

int main()
{
    using namespace std::literals;
    printEmployee("Joe"sv);

    return 0;
}