#include <iostream>

int main()
{
	const int x{ 5 };

	// constant value pointer -> value can't be changed
	const int* pX{ &x };

	std::cout << pX << '\n' << &x;

	const int y{ 10 };
	pX = &y;
	std::cout << "\n" << *pX << ' ' << y;

	// constant pointer -> pointer can't be changed
	int z{ 100 };
	int* const pZ{ &z };
	std::cout << '\n' << z << *pZ << '\n';

	return 0;
}