
#include "bubble_sort.h"
#include "insertion_sort.h"
#include "selection_sort.h"
#include "merge_sort.h"
#include "quick_sort.h"
#include "binary_search.h"
#include "bucket_sort.h"
#include  <vector>
#include  <iostream>
using namespace std;

void print_vec(vector<int> vec);
void fill_vec(int a[], int a_size, vector<int> &vec);

int main(){
	// Fill vector
	vector<int> vec;
	int array[] = {2, 7, 4, 5, 1, 9, 11};
	int array_size = 7;
	fill_vec(array, array_size, vec);

	vector<int> vec2;
	int array2[] = {2, 3, 5, 2, 5, 3, 3, 3, 5, 2};
	int array_size2 = 10;
	fill_vec(array2, array_size2, vec2);

	// Test sorts
	cout << "Initial array:\n";
	cout << "Vector 1: ";
	print_vec(vec);
	cout << "Vector 2: ";
	print_vec(vec2);

	cout << "Bubble sort: \n";
	cout << "Non-adaptive: ";
	print_vec(bubble_na(vec, 0, vec.size() - 1));
	cout << "Adaptive: ";
	print_vec(bubble_a(vec, 0, vec.size() - 1));

	cout << "Selection sort: \n";
	cout << "Non-adaptive: ";
	print_vec(selection_na(vec, 0, vec.size() - 1));
	cout << "Adaptive: ";
	print_vec(selection_na(vec, 0, vec.size() - 1));

	cout << "Insertion sort: \n";
	cout << "Non-adaptive: ";
	print_vec(insertion_na(vec, 0, vec.size() - 1));
	cout << "Adaptive: ";
	print_vec(insertion_a(vec, 0, vec.size() - 1));

	cout << "Merge sort: \n";
	print_vec(merge_call(vec, 0, vec.size() - 1));

	cout << "Quick sort: \n";
	print_vec(quick_call(vec, 0, vec.size() - 1));

	cout << "Bucket sort (Vector 2): \n";
	print_vec(bucket_sort(vec2));

	cout << "Binary search: \n";
	cout << "Location of '5': " << 
		binary_search(vec, 5, 0, vec.size() - 1) << "\n";
	cout << "Location of '1': " << 
		binary_search(vec, 1, 0, vec.size() - 1) << "\n";

	return 0;
}

void print_vec(vector<int> vec){
	cout << "[";
	for(int i = 0; i < vec.size() - 1; i++){
		cout << vec[i] << ", ";
	}
	cout << vec[vec.size() - 1] << "]\n";
}

void fill_vec(int a[], int a_size, vector<int> &vec){
	for(int i = 0; i < a_size; i++){
		vec.push_back(a[i]);
	}
}


