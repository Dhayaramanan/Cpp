#include <iostream>

class Date
{
private:
    int m_day{};
    int m_month{};
    int m_year{};

public:
    // const member function
    void printDate() const
    {
        std::cout << m_day << '/' << m_month << '/' << m_year;
    }

    int getYear() const { return m_year; }
    void setYear(int year) { m_year = year; }

    int getMonth() const { return m_month; }
    void setMonth(int month) { m_month = month; }

    int getDay() const { return m_day; }
    void setDay(int day) { m_day = day; }
};

int main()
{
    Date d{};
    d.setYear(2024);
    std::cout << "This year is " << d.getYear();

    return 0;
}