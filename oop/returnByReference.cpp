#include <iostream>
#include <string>

class Employee
{
private:
    std::string m_name{};

public:
    void setName(std::string_view name) { m_name = name; }
    const std::string& getName() const { return m_name; }
};

int main()
{
    Employee joe{};
    joe.setName("Joe");

    std::cout << joe.getName();

    return 0;
}