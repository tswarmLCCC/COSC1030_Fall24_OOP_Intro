#include <iostream>
#include <string>

#include "GVCoin.h"
using namespace std;

GVCoin::GVCoin(int seed) {
	heads = 0;
	flips = 0;
	isTails = false;
	SetSeed(seed);
}

bool GVCoin::IsTails() {
  return isTails; // Return true if coin is currently tails
}  

void GVCoin::Flip() {
	int random = rand() % 2;
	if (random == 1) {
		isTails = false;
	}
	else {
		isTails = true;
	}
	flips++;  // Increment flip count
	if(!isTails) {
		heads++; // Increment heads count if current flip results in heads
	}
}

int GVCoin::NumFlips() {
	return flips;
}

int GVCoin::NumHeads() {
	return heads;
}

// set the random number generator seed for testing
void GVCoin::SetSeed(int seed) {
	srand(seed);
}