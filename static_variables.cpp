#include <iostream>


void f_b() {
  static int a = 0;
  std::cout << a << std::endl;
  a ++;
}

void f_a() {
  std::cout << "a" << std::endl;
}

int main() {
  f_a();
  f_b();
  f_b();
  f_b();
  f_b();
}
