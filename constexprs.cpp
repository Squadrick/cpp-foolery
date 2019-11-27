#include <iostream>

constexpr int val() {
  return 2;
}

constexpr std::string_view strval() {
  return "Dheeraj";
}

int main() {
  std::cout << val() << std::endl;
  std::cout << strval() << std::endl;
}
