#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include "helpers.h"
#include <vector>
using namespace std;

vector<int> bubble_na(vector<int> a, int left, int right);
vector<int> bubble_a(vector<int> a, int left, int right);


// Non-Adaptive Bubble Sort
vector<int> bubble_na(vector<int> a, int left, int right){
	for(int i = left; i < right - 1; ++i){
		for(int k = right - 1; k > i; --k){
			compswap(a[k - 1], a[k]);
		} // for k
	} // for i
	return a;
} // bubble_na()

// Adaptive Bubble Sort
vector<int> bubble_a(vector<int> a, int left, int right){
	for(int i = left; i < right - 1; ++i){
		bool swapped = false;
		for(int k = right - 1; k > i; --k){
			if(a[k] < a[k - 1]){
				swapped = true;
				swap(a[k - 1], a[k]);
			} // if
		} // for k
		if(!swapped)
			break;
	} // for i
	return a;
} // bubble_a()

#endif // BUBBLE_SORT_H