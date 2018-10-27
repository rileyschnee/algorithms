#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include "helpers.h"
#include <vector>
using namespace std;

void merge(vector<int> &a, int left, int mid, int right);
void merge_sort(vector<int> &a, int left, int right);

// Call to merge_sort()
vector<int> merge_call(vector<int> a, int left, int right){
	vector<int> b = a;
	merge_sort(b, left, right);
	return b;
}
// Merge Sort
void merge_sort(vector<int> &a, int left, int right){
	if(right < left + 2)
		return;
	int mid = left + (right - left) / 2;
	merge_sort(a, left, mid);
	merge_sort(a, mid, right);
	merge(a, left, mid, right);
} // merge_sort()

// Merge Function
void merge(vector<int> &a, int left, int mid, int right){
	int size = right - left;
	vector<int> c(size);

	for(int i = left, j = mid, k = 0; k < size; ++k){
		if(i == mid)
			c[k] = a[j++];
		else if (j == right)
			c[k] = a[i++];
		else 
			c[k] = (a[i] <= a[j]) ? a[i++] : a[j++];
	} // for
	copy(c.begin(), c.end(), &a[left]);
} // merge()

#endif // MERGE_SORT_H