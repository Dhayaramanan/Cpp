#include <iostream>
#include <utility>

int main()
{
	enum class Color
	{
		red,
		green,
		blue,
	};

	enum class Feel
	{
		happy,
		blue,
		lone,
	};

	Color color{ Color::blue };
	Feel feeling{ Feel::blue };

	// std::cout << color << feeling << '\n';

	if (feeling == Feel::blue)
		std::cout << "You're sad!\n";
	std::cout << std::to_underlying(color) << '\n';

	return 0;
}