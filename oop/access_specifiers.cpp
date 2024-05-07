#include <iostream>
#include <string>
#include <string_view>

class Person
{
private:
    std::string m_name{};

public:
    void kisses(const Person& p) const
    {
        std::cout << m_name << " kisses " << p.m_name << '\n';
    }

    void setName(std::string_view name)
    {
        m_name = name;
    }
};

int main()
{
    std::string name{};
    
    Person p1;
    std::cout << "Enter name for p1: ";
    std::getline(std::cin >> std::ws, name);
    // std::cin << name;
    p1.setName(name);

    Person p2;
    std::cout << "Enter naem for p2: ";
    std::getline(std::cin >> std::ws, name);
    p2.setName(name);

    p1.kisses(p2);

    return 0;
}