#include <iostream>
#include <vector>

void printFirst(std::vector<int>& n)
{
    std::cout << n[0] << '\n';
}

template <typename T>
void passRef(std::vector<T>& v)
{
    std::cout << v.at(2) << '\n';
}

// returning vector
std::vector<int> returnVector()
{
    std::vector v{1, 2, 3, 4};

    return v;
}

int main(int argc, char const *argv[])
{
    std::vector number{1, 2, 3, 4, 5};

    printFirst(number);

    passRef(number);

    return 0;
}
