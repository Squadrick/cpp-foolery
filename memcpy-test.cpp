#include <iostream>
#include <cstring>
#include <ctime>

#define TIME_START std::clock_t start; start = std::clock();
#define TIME_END std::cout << "Time: " << (std::clock() - start) / (double) (CLOCKS_PER_SEC / 1000) << " ms" << std::endl;

#define SIZE 100
int main() {
	char *a = (char*) malloc(SIZE * SIZE *sizeof(char));
	char *b = (char*) malloc(SIZE * SIZE *sizeof(char));
	
	TIME_START
	memcpy(b, a, SIZE * SIZE *sizeof(char));
	TIME_END
}
