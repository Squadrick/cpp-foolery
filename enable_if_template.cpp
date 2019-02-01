#include <iostream>

#define ENSURE_NUMERIC(T, V) template<typename T, typename V, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type, typename = typename std::enable_if<std::is_arithmetic<V>::value, V>::type>
#define ENSURE_NUMERIC_IMPL(T, V) template<typename T, typename V, typename, typename>

ENSURE_NUMERIC(T, V) void func(T t, V v);
ENSURE_NUMERIC_IMPL(T, V)
	void func(T t, V v) {
		std::cout << t << v << std::endl;
	}

int main() {
	func(1, 2);
	func(1.1, 2.2);
	func(1, 2.1);
	func(1.1, 2);
//	func("Dheeraj", 1.2);
}
