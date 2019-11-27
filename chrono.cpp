#include <chrono>
#include <iostream>

int main() {
  uint64_t t = std::chrono::duration_cast<std::chrono::nanoseconds>(
    std::chrono::system_clock::now().time_since_epoch()).count();
  std::cout << t << std::endl;
}
