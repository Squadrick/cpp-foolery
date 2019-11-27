#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main() {
  int size = 20 * 1024 * 1024;
  int *a = malloc(size);
  int *b = malloc(size);

  memcpy(a, b, size);
}
