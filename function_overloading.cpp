#include <iostream>

int add(int x, int y) {
	return x + y;
}

double add(double x, double y) {
	return x + y;
}

int add(int a, int b, int c) {
	return a + b + c;
}

int main() {
	std::cout << add(1, 2) << '\n';
	std::cout << add(1.1, 2.1) << '\n';
	std::cout << add(1, 2, 3);

	return 0;
}