#include <iostream>

// base type not specified
enum Color
{
	red,
	green,
	blue,
};

// base type specified
enum Phone : int
{
	oppo,
	vivo,
	samsung,
};

int main()
{
	Color apple{ red };
	Color shirt{ blue };
	Color cup{ green };

	std::cout << apple << '\n';

	// Color socks{ white };

	Color bag{ static_cast<Color>(2) };
	std::cout << bag << '\n';

	// can initialize with integral value if base type specified c++17
	Phone ph{ 0 };
	std::cout << ph << '\n';

	return 0;
}