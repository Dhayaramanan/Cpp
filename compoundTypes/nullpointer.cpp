#include <iostream>

int main()
{
	int* x{};

	if (x == nullptr)
		std::cout << "x is a null pointer\n";
	else
		std::cout << "x is not a null pointer";

	return 0;
}