#include <ios> // for std::boolalpha
#include <iostream>


template <typename T>
class Pair
{
private:
    T m_first{};
    T m_second{};

public:
    Pair(const T& first, const T& second)
        : m_first { first }
        , m_second { second }
    {
    }

    bool isEqual(const Pair<T>& pair);
};


template <typename T>
bool Pair<T>::isEqual(const Pair<T>& pair)
{
    return (m_first == pair.m_first && m_second == pair.m_second);
}

int main()
{
    Pair p1{5, 6};

    std::cout << std::boolalpha << "isEqual(Pair(5, 6)): " << p1.isEqual(Pair{5, 6}) << '\n';
    std::cout << std::boolalpha << "isEqual(Pair(5, 7)): " << p1.isEqual(Pair{5, 7}) << '\n';

    return 0;
}