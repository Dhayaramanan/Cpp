#include <iostream>
#include <string>

const std::string& getProgramName()
{
	static const std::string name{ "returnByReference" };
	
	return name;
}

const int& getId()
{
	static int s_x{ 0 };
	++s_x;
	return s_x;
}

// OK
const std::string& first(const std::string& a, const std::string& b)
{
	return (a < b) ? a : b;
}

int main()
{
	std::cout << "The program is name as " << getProgramName();

	const int id1 { getId() };
	const int id2 { getId() };

	std::cout << id1 << id2 << '\n';

	std::cout << first("Hello", "World") << '\n';

	return 0;
}