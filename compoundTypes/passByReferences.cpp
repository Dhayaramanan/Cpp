#include <iostream>
#include <string>

void printValue(std::string& y)
{
	std::cout << y << '\n';
}

void printValue(const int& y)
{
	std::cout << y << '\n';
}

int main()
{
	std::string x{ "Hello, World" };
	printValue(x);

	int z{ 10 };
	printValue(z);

	return 0;
}