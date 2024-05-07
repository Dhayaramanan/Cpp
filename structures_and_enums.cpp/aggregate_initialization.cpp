#include "employee.h"
#include <iostream>

int main()
{
    Employee frank{1, 32, 60000.0};
    Employee joe{2, 28, 40000.0};

    // designated initialization
    Employee dummy{3, 100000.0};

    std::cout << frank.wage << '\n';
    std::cout << dummy.id << ' ' << dummy.age << ' ' << dummy.wage;

    return 0;
}