#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include "helpers.h"
#include <vector>
using namespace std;

vector<int> insertion_na(vector<int> a, int left, int right);
vector<int> insertion_a(vector<int> a, int left, int right);


// Non-Adaptive Insertion Sort
vector<int> insertion_na(vector<int> a, int left, int right){
	for(int i = left; i < right - 1; ++i){
		for(int k = i; k > left; --k){
			compswap(a[k - 1], a[k]);
		} // for k
	} // for i
	return a;
} // insertion_na()

// Adaptive Insertion Sort
vector<int> insertion_a(vector<int> a, int left, int right){
	// find min and put in a[left]
	for(int i = right - 1; i > left; --i){
		compswap(a[i - 1], a[i]);
	}

	for(int i = left + 2; i < right; ++i){
		int x = a[i];
		int k = i;
		while(x < a[k - 1]){
			a[k] = a[k - 1];
			--k;
		} // while
		a[k] = x;
	} // for i
	return a;
} // insertion_a()

#endif // INSERTION_SORT_H