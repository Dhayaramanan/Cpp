#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    std::vector primes{2, 3, 5, 7, 11};

    std::cout << primes.at(2);

    return 0;
}
