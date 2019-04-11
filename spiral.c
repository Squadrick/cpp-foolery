#include <stdio.h>
#include <stdlib.h>

#define N 5

int main() {
  int arr[N][N];
  int vec[N*N];

  for (int i = 0; i < N*N; ++i) {
    vec[i] = i+1;
    arr[i / N][i % N] = 0;
  }
  
  int k = 0;

  for (int i = 0; i <= N / 2; ++i) {
    for (int j = i; j < N - i; ++j) {
      arr[i][j] = vec[k++];
    }
    for (int j = i+1; j < N - i; ++j) {
      arr[j][N-i-1] = vec[k++];
    }
    for (int j = N-i-2; j >= i; j--) {
      arr[N-i-1][j] = vec[k++];
    }
    for (int j = N-i-2; j > i; j--) {
      arr[j][i] = vec[k++];
    }
  }

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}
