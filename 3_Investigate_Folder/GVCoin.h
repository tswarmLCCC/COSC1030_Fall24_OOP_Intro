#ifndef GVCOIN_H_
#define GVCOIN_H_

#include <iostream>
using namespace std;

class GVCoin {
    public:
		GVCoin(int seed);
		bool IsTails();  
		void Flip();
		int NumFlips();
		int NumHeads();
		void SetSeed(int seed);

    private:
		bool isTails;
        int flips;
        int heads;
};

#endif /* GVCOIN_H_ */