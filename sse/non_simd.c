#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define LENGTH 64000000
#define MAX(a, b) (((a)>(b))?(a):(b))

int main() {
	char *a = malloc(LENGTH * sizeof(char));
	char *b = malloc(LENGTH * sizeof(char));
	a = memset(a, 0, LENGTH * sizeof(char));
	b = memset(b, 1, LENGTH * sizeof(char));
	printf("%d", (int) a[0]);
	const int len = LENGTH ;
	for(int i = 0; i < len; ++i) {
		a[i] = MAX((int)a[i], (int)b[i]);
	}
	printf("%d", (int) a[0]);
}

