#include <iostream>
#include <cstring>

int main() {
	char *arr = (char*) malloc(100);
	std::memset(arr, 0, 100);

	for(int i = 0; i < 50; ++i)
		arr[i] = 'a';

	for(int i = 0; i < 100; ++i)
		std::cout << arr[i] << std::endl;

	arr[99] = std::move(arr[0]);
}
