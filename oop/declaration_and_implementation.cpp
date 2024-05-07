#include <iostream>

class Date
{
private:
    int m_year{};
    int m_month{};
    int m_day{};

public:
    Date(int year, int month, int day); // declaration

    void print() const; // declaration

    int getYear() const { return m_year; }
    int getMonth() const { return m_month; }
    int getDay() const { return m_day; }
};

Date::Date(int year, int month, int day)
    : m_year{ year }
    , m_month{ month }
    , m_day{ day }
{
}

void Date::print() const
{
    std::cout << m_day << "/" << m_month << "/" << m_year << '\n';
}

int main()
{
    const Date d{ 2024, 5, 4 };
    d.print();

    return 0;
}