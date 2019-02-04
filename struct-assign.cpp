#include <iostream>

struct float2 {
  float a, b;
};

int main() {
  float2 f = {2.0f, 3.0f};

  std::cout << f.a << "\n" << f.b << std::endl;
}
