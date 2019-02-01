#include <iostream>
#include <vector>

void print(const std::vector<int> &v) {
  for(auto i = 0; i < v.size(); ++i)
    std::cout << v[i] << " ";
  std::cout << "\n";
}

int main() {
  int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::vector<int> nums(num, num+7);
  print(nums);

  int other[] = {1, 2, 3, 4, 5};

  print(nums);
}
