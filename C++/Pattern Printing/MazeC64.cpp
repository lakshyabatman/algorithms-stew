/*
 * Print Maze pattern
 *
 * best viewed with 8x8 bitmap font
 *
 * original C64 code is this famous line:
 10 PRINT CHR$ (205.5 + RND (1)); : GOTO 10
 */
#include <iostream>
#include <random>
#include <functional>

#define width 80
#define height 25

int main() {
	std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution(0, 1);
	auto dice = std::bind(distribution, generator);
	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			char ch = '/' + (dice() * ('\\' - '/'));
			std::cout << ch;
		}
		std::cout << "\n";
	}
	return 0;
}
