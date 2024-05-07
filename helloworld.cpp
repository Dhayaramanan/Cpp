#include <iostream>
#include <string>

int main() {
    std::cout << "Hello, World\n";

    for (int i = 0; i < 100; ++i) {
        if (i % 2 == 0)
            std::cout << i << '\n';
        else
            std::cout << "odd\n";
    }

    std::string name;
    std::string age;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Enter your age: ";
    std::getline(std::cin >> std::ws, age);

    return 0;
}