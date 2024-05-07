#include <iostream>

int main()
{
	int x{ 5 };
	int& refX{ x };

	std::cout << x << '\n';
	std::cout << refX << '\n';

	x = 6;
	std::cout << refX << '\n';

	refX = 10;
	std::cout << x << '\n';

	// int& v{ void };
	// std::cout << v << '\n';

	{
		int& scopeRef{ x };
		std::cout << scopeRef << '\n';
	} // scope of scopeRef ends here

	const int& crefX{ x }; // constant reference
	const int& rref{ 5 };

	return 0;
}