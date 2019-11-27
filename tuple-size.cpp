#include <tuple>
#include <iostream>

int main() {
  std::cout << sizeof(std::tuple<int, std::string, bool>) << std::endl;
}
