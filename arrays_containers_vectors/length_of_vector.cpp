#include <iostream>
#include <vector>

int main()
{
    std::vector primes{2, 3, 5, 7, 11};
    std::cout << primes.size() << '\n';
    std::cout << std::size(primes) << '\n';

    int length{ static_cast<int>(primes.size()) };

    std::cout << std::ssize(primes) << '\n';

    return 0;
}