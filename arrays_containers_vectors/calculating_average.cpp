#include <iostream>
#include <vector>

double calculateAverage(const std::vector<int>&);

int main()
{
    std::vector v{1, 2, 3, 4, 5};
    std::cout << calculateAverage(v);

    return 0;
}

double calculateAverage(const std::vector<int>& v)
{
    std::size_t size{ v.size() };
    double average{};

    for (size_t i{0}; i < size; ++i)
        average += v[i];

    average /= size;

    return average;
}