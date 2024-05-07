#include <iostream>

void print(int x) {
	std::cout << x;
}

void print(double x) {
	std::cout << x;
}

int main() {
	print(5L);

	return 0;
}