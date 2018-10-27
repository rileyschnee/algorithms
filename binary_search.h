#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

#include "helpers.h"
#include <vector>
using namespace std;


// Binary Search (returns -1 if not found)
int binary_search(vector<int> a, int val, int left, int right){
	while(right > left){
		int mid = left + (right - left) / 2;
		if(a[mid] < val)
			left = mid + 1;
		else if(val < a[mid])
			right = mid;
		else // (val == a[mid])
			return mid;
	} // while
	return -1;
} // binary_search()

#endif // BINARY_SEARCH_H