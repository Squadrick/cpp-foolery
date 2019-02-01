#include <immintrin.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 64000000

int main() {
	char *a = malloc(LENGTH * sizeof(char));
	char *b = malloc(LENGTH * sizeof(char));
	memset(a, 0, LENGTH * sizeof(char));
	memset(b, 1, LENGTH * sizeof(char));
	
	__m256i* __a = (__m256i*) a;
	__m256i* __b = (__m256i*) b;
	
	const int len = LENGTH / 32;
	for(int i = 0; i < len; i++) {
		__m256i _a = _mm256_loadu_si256(__a+i);
		__m256i _b = _mm256_loadu_si256(__b+i);
		
		_mm256_storeu_si256(__a+i, _mm256_max_epi8(_a, _b));
	}
	printf("%d", (int)a[0]);
}
