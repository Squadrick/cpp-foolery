#include <immintrin.h>
#include <stdio.h>
#include <string.h>

#define LENGTH 64000000

int main() {
	char *a = aligned_alloc(32, LENGTH * sizeof(char));
	char *b = aligned_alloc(32, LENGTH * sizeof(char));
	a = memset(a, 0, LENGTH * sizeof(char));
	b = memset(b, 1, LENGTH * sizeof(char));
	printf("%d", (int) a[0]);
	__m256i* _a = (__m256i*) a;
	__m256i* _b = (__m256i*) b;
	
	const int len = LENGTH / 32;
	for(int i = 0; i < len; ++i) {
		_a[i] = _mm256_max_epi8(_a[i], _b[i]);
	}
	printf("%d", (int) a[0]);
}

