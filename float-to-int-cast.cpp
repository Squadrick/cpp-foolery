#include <iostream>

int main() {
	float a = 2.5;

	int b = static_cast<int>(a);
	std::cout << a<< " " << b << "\n";

	std::cout << (a > b) << "\n";
}
