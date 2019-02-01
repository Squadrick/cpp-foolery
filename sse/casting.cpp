#include <iostream>
#include <immintrin.h>

int main() {
	__m256 a = _mm256_set_ps(7.3f, 6.0f, 5.0f, 4.0f, 3.0f, 2.0f, 1.0f, 0.9f);

	__m256 b = _mm256_round_ps(a, _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC);

	float *c = reinterpret_cast<float *>(&b);
	
//	__m256i d = _m256_cvtps_epi32()

	for(int i = 0; i < 8; ++i) {
		int idx = c[i];
		std::cout << idx << std::endl;
		std::cout << c[i] << std::endl;
	}
}
