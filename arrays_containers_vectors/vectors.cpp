#include <iostream>
#include <vector>

int main()
{
    std::vector<int> empty{};
    std::vector primes{2, 3, 5, 7, 11};

    std::cout << "First prime: " << primes[0] << '\n';
    std::cout << "Undefined prime: " << primes[100] << '\n';

    std::cout << sizeof(empty) << '\n' << sizeof(primes) << '\n';
    std::cout << primes.size() << '\n';

    // value initalized to zero
    std::vector<int> tenVector(10);

    return 0;
}