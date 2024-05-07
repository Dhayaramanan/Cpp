#include <iostream>

int main()
{
	int x{};
	int& refX{ x };

	std::cout << &x << '\n';
	std::cout << &refX << '\n';

	std::cout << *&x << '\n';

	return 0;
}