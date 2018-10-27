#ifndef BUCKET_SORT_H
#define BUCKET_SORT_H

#include "helpers.h"
#include <vector>
#include <iostream>
using namespace std;


// Binary Search (returns -1 if not found)
vector<int> bucket_sort(vector<int> a){
	vector<int> result = a;
	int numBuckets = *max_element(a.begin(), a.end()) + 1;
	vector< vector<int> > B(numBuckets);
	// Divide into buckets
	for(int i = 0; i < a.size(); i++){
		B[a[i]].push_back(a[i]);
	} // for
	// Concatenate
	int current = 0;
	for(int i = 0; i < numBuckets; ++i){
		for(int k = 0; k < B[i].size(); k++){
			result[current++] = B[i][k];
		} // for
	} // for
	return result;
} // bucket_sort()

#endif // BUCKET_SORT_H