#pragma once
#include <random>

namespace afro
{
	void seed_random(unsigned int seed) { srand(seed); }
	int random() { return rand(); }
	int random(unsigned int max) { return rand() % max; }
	int random(unsigned int min, unsigned max) { return min + random((max - min) + 1); }
}