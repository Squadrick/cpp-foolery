#include <immintrin.h>
#include <iostream>

void printVec(__m256 vec) {
	float *x = (float*) &vec;
	for(int i = 0; i < 8; ++i)
		std::cout << x[i] << " ";
	std::cout << std::endl;
}

__m256 _mm256_mod_ps(__m256 a, __m256 b) {
	__m256 c = _mm256_div_ps(a, b);
	__m256 cTrunc = _mm256_round_ps(c, _MM_FROUND_TO_ZERO);
	__m256 base = _mm256_mul_ps(cTrunc, b);
	printVec(base);
	__m256 r = _mm256_sub_ps(a, base);
	return r;
}

__m256 _mm256_mod_rcp_ps(__m256 a, __m256 b, __m256 b_rcp) {
	__m256 c = _mm256_mul_ps(a, b_rcp);
	__m256 cTrunc = _mm256_round_ps(c, _MM_FROUND_TO_ZERO);
	printVec(cTrunc);
	__m256 base = _mm256_mul_ps(cTrunc, b);
	printVec(base);
	__m256 r = _mm256_sub_ps(a, base);
	return r;
}

int main() {
	__m256 a = _mm256_set_ps(7.0f, 6.0f, 5.0f, 4.0f, 3.0f, 2.0f, 1.0f, 0.0f);
	__m256 b = _mm256_set1_ps(2.0f);
	//__m256 b_rcp = _mm256_rcp_ps(b);
	__m256 b_rcp = _mm256_div_ps(_mm256_set1_ps(1.0f), b);
	__m256 c1 = _mm256_mod_ps(a, b);
	__m256 c2 = _mm256_mod_rcp_ps(a, b, b_rcp);

	printVec(c1);
	printVec(c2);
}
