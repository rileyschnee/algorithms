#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include "helpers.h"
#include <vector>
using namespace std;

vector<int> selection_na(vector<int> a, int left, int right);
vector<int> selection_a(vector<int> a, int left, int right);


// Non-Adaptive Selection Sort
vector<int> selection_na(vector<int> a, int left, int right){
	for(int i = left; i < right - 1; ++i){
		int min = i;
		for(int k = i + 1; k < right; ++k){
			if(a[k] < a[min]){
				min = k;
			}
		} // for k
		swap(a[i], a[min]);
	} // for i
	return a;
} // selection_na()

// Adaptive Selection Sort
vector<int> selection_a(vector<int> a, int left, int right){
	for(int i = left; i < right - 1; ++i){
		int min = i;
		for(int k = i + 1; k < right; ++k){
			if(a[k] < a[min]){
				min = k;
			}
		} // for k
		if(min != i)
			swap(a[i], a[min]);
	} // for i
	return a;
} // selection_a()

#endif // SELECTION_SORT_H
