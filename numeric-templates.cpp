#include <iostream>
#include <type_traits>

template<typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
void function(T param) {
	std::cout << param << std::endl;
}

int main() {
	function(2);
	function(2.5);
}
