#include <vector>
#include <iostream>

class A {
	public:
		std::vector<int> arr;
		void show() {
			std::cout << "A::show()" << std::endl;
		}
};

int main() {
	A a;
	a.show();
	a.arr = std::vector<int>(100);

	a.arr[0] = 100;

	std::cout << a.arr[0] << std::endl;
}
