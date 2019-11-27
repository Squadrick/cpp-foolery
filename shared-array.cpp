#include <memory>
#include <iostream>
#include <cstring>

void fn(std::unique_ptr<int[]> &arr) {
  arr = std::unique_ptr<int[]>(new int[100]);
  
  int* _arr = static_cast<int*>(malloc(100 * sizeof(int)));
  for (int i = 0; i < 100; ++i) {
    _arr[i] = 100 - i;
  }

  std::memcpy(arr.get(), _arr, 100*sizeof(int));
}

int main() {
  std::unique_ptr<int[]> arr;
  fn(arr);

  int *_arr = arr.get();
  for (int i = 0; i < 100; ++i) {
    std::cout << _arr[i] << std::endl;
  }
}
