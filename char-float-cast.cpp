#include <iostream>

void func(float a) {
	std::cout << "a = " << a << std::endl;
}

int main() {
	uint8_t b = 12;
	func(b);
}
