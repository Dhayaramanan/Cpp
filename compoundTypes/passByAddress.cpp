#include <iostream>

void passByValue(std::string s)
{
	std::cout << s << '\n';
}

void passByReference(const std::string& s)
{
	std::cout << s << '\n';
}

void passByAddress(const std::string* s)
{
	std::cout << *s << '\n';
}

void printIDNumber(const int* id = nullptr)
{
	if (id)
		std::cout << "Your ID number is " << *id << ".\n";
	else
		std::cout << "Your ID number is not known.\n";
}

int main()
{
	std::string str{ "Hello WOrld" };

	passByValue(str);
	passByReference(str);
	passByAddress(&str);


	printIDNumber();

	return 0;
}