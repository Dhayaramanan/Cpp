#include <iostream>
#include <utility>

template <typename T, typename U>
struct Pair
{
    T first{};
    U second{};
};

// type deduction guide
// template <typename T, typename U>
// Pair(T, U) -> Pair<T, U>;

int main(int argc, char const *argv[])
{
    std::pair<int, int> p1{2, 2};
    std::pair p2{2, 3};

    std::cout << p1.first << '\n';

    Pair<int, int> p3{1, 2};
    std::cout << p3.first << p3.second << '\n';
    return 0;
}
