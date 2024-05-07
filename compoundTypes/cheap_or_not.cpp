#include <iostream>

#define isSmall(T) (sizeof(T) <= 2 * sizeof(void*))

struct S
{
	double a;
	double b;
	double c;
};

int main()
{
	std::cout << std::boolalpha << '\n';
	std::cout << isSmall(int) << '\n';
	std::cout << isSmall(double) << '\n';
	std::cout << isSmall(S) << '\n';

	return 0;
}