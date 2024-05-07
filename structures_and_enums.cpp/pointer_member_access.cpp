#include "employee.h"
#include <iostream>

int main()
{
    Employee joe{1, 34, 65000.0};
    ++joe.age;
    joe.wage += 3000;

    Employee* pJoe{&joe};
    std::cout << pJoe->age << '\n';
    
    return 0;
}