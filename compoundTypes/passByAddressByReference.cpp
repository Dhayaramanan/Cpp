#include <iostream>

void nullify(int*& ref)
{
	ref = nullptr;
}

int main()
{
	int x{ 5 };
	int* ptr{ &x };

	std::cout << "ptr is " << (ptr ? "not null" : "null") << '\n';
	
	nullify(ptr);

	std::cout << "ptr is " << (ptr ? "not null" : "null") << '\n';

	return 0;
}