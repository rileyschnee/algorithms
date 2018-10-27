#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include "helpers.h"
#include <vector>
using namespace std;

void quick_sort(vector<int> &a, int left, int right);
int partition_end(vector<int> &a, int left, int right);
int partition_middle(vector<int> &a, int left, int right);

// Call to quick_sort()
vector<int> quick_call(vector<int> a, int left, int right){
	vector<int> b = a;
	quick_sort(b, left, right);
	return b;
}
// Quick Sort
void quick_sort(vector<int> &a, int left, int right){
	if(left + 1 >= right)
		return;
	int pivot = partition_end(a, left, right);
	quick_sort(a, left, pivot);
	quick_sort(a, pivot + 1, right);
} // quick_sort()

//  End Parition Function
int partition_end(vector<int> &a, int left, int right){
	int pivot = --right;

	while(true){
		while(a[left] < a[pivot])
			++left;
		while(left < right && a[right - 1] >= a[pivot])
			--right;
		if(left >= right){
			break;
		}
		swap(a[left], a[right - 1]);
	} // while
	swap(a[left], a[pivot]);
	return left;
} // partition_end()

//  Middle Parition Function
int partition_middle(vector<int> &a, int left, int right){
	int pivot = left + (right - left) / 2;
	swap(a[pivot], a[--right]);
	pivot = right;

	while(true){
		while(a[left] < a[pivot])
			++left;
		while(left < right && a[right - 1] >= a[pivot])
			--right;
		if(left >= right){
			break;
		}
		swap(a[left], a[right - 1]);
	} // while
	swap(a[left], a[pivot]);
	return left;
} // partition_middle()

#endif // MERGE_SORT_H