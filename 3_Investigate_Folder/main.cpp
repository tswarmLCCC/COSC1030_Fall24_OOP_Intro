#include <iostream>

#include "GVCoin.h"
using namespace std;

int ConsecutiveHeads(GVCoin c, int goal) {
   int streak = 0;   // streak counts how many heads in a row

   while (streak < goal) { // flip until streak == goal
      c.Flip();
      if (!c.IsTails())   // Either increment streak or set streak to zero
         streak++;
      else streak = 0;
   }

   return c.NumFlips();  // Return total flips required to match goal
}

int main() {
	GVCoin c = GVCoin(15); // Create a GVCoin object with seed value 15
	int numHeads = 5; // Desire 5 consecutive heads
	int flips = ConsecutiveHeads(c, numHeads); // Should return 53 using GVCoin object with seed value 15
	cout << "Total number of flips for 5 consecutive heads: " << flips << endl;
}