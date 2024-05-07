int g_x{ 5 };

int main()
{
	constexpr int& refX1{ g_x };

	static int x = 10;
	constexpr int& refX2{ x };

	int x2 = 11;
	// constexpr int refX3{ x2 }; //compiler error

	static const int y{ 20 };
	constexpr const int& refY{ y };

	return 0;
}