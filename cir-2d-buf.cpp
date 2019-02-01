#include <stdlib.h>
#include <iostream>
#include <cmath>

// If you ever need to debug this, don't
// Contact me: dheeraj98reddy@gmail.com
// This code looks like cancer, but it's fast


class Buffer {
	public:
		char *arr;
		int size, w, h, sx, sy;
		Buffer(int w, int h);
		void displayRaw();
		void move(int xd, int yd);
		int start();
};

Buffer::Buffer(int w, int h):w(w), h(h), sx(0), sy(0), size(w*h) {
	arr = (char*) malloc(w * h * sizeof(char));
}

void Buffer::displayRaw() {
	for(int i = 0; i < w; i++) {
		for(int j = 0; j < h; j++)
			std::cout << static_cast<int>(arr[i*w + j]) << "\t";
		std::cout << std::endl;
	}
}

int Buffer::start() {
	return sy * w + sx;
}

void Buffer::move(int xd, int yd) {
	yd = -1 * yd;

	for(int i = (yd > 0 ? 0 : h + yd); i < (yd > 0 ? yd : h); ++i)
		for(int j = 0; j < w; ++j)
			arr[i * w + j] = -1;

	for(int i = (xd > 0 ? 0 : w + xd); i < (xd > 0 ? xd : w); ++i)
		for(int j = 0; j < h; ++j)
			arr[j * w + i] = -1;
	
	sx = sx + xd >= 0 ? sx + xd : sx + w + xd;
	sy = sy + yd >= 0 ? sy + yd : sy + h + yd;
	if(sx >= w) sx = sx - w;
	if(sy >= h) sy = sy - w;
}

int main() {
	Buffer b(10, 10);

	b.move(-1, -1);
	b.move(2, 2);
	b.move(-1, -1);
	b.move(-1, 1);
	b.move(3, -2);
	b.move(1, -1);
	b.move(-3, 2);

	b.move(1, 1);
	b.move(-1, -1);

	b.displayRaw();
	std::cout << "Start: " << b.sx << ", " << b.sy << std::endl;
}
