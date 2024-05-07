#include "employee.h"
#include <iostream>

void printEmployee(const Employee& em)
{
    std::cout << em.id << '\n';
    std::cout << em.age << '\n';
    std::cout << em.wage << '\n';
}

int main()
{
    printEmployee(Employee {1, 23, 20000});
    std::cout << '\n';
}