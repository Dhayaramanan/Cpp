#include <iostream>
#include <string_view>

enum Color
{
	red,
	green,
	blue,
};

constexpr std::string_view getColorname(Color color)
{
	switch (color)
	{
	case red:
		return "red";
	case green:
		return "green";
	case blue:
		return "blue";
	default:
		return "???";
	}
}

std::ostream& operator<<(std::ostream& out, Color color)
{
	out << getColorname(color);
	return out;
}

int main()
{
	Color shirt{ blue };
	std::cout << "Your shirt color is " << shirt << '\n';

	return 0;
}