#include "avg_logger.h"

#include <iostream>
#include <random>

int main() {
  std::random_device dev;
  std::mt19937 rng(dev());
  std::uniform_int_distribution<std::mt19937::result_type> dist(0, 100);

  auto duration = std::chrono::duration<int>(1);
  AvgLogger<int, double> al(duration);

  auto start_time = std::chrono::system_clock::now();
  while (true) {
    al.insert((float)dist(rng));
    auto current_time = std::chrono::system_clock::now();

    if (current_time - start_time > duration) {
      std::cout << al.get_average() << std::endl;
      start_time = current_time;
    }
  }
}
