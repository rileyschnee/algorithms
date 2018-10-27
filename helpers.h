#ifndef HELPERS_H
#define HELPERS_H

// Helper functions for algorithms

// Swaps items a and b
void swap(int &a, int &b ){
	int temp = a;
	a = b;
	b = temp;
}; // swap()

// Compares a and b and, if B is smaller, calls swap()
void compswap(int &a, int &b ){
	if(b < a)
		swap(a, b);
}; // compswap()

#endif // HELPERS_H