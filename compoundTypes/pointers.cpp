#include <iostream>
#include <typeinfo>

int main()
{
	int x{ 10 };
	int* pX{ &x };

	std::cout << x << ' ' << *pX << '\n';
	std::cout << &x << ' ' << pX << '\n';

	std::cout << typeid(&x).name() << '\n';

	return 0;
}