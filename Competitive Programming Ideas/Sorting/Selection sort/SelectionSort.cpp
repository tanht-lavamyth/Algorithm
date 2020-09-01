/*
* @Author: tanht
* @Date:   2020-08-31 22:51:05
* @Last Modified by:   tanht
* @Last Modified time: 2020-08-31 23:01:41
* @Email: tanht.lavamyth@gmail.com
*/

// Source: 
// https://www.geeksforgeeks.org/selection-sort/
// No read: https://www.geeksforgeeks.org/sorting-algorithm-slightly-improves-selection-sort/?ref=rp
// https://www.geeksforgeeks.org/c-program-for-sorting-dates-using-selection-sort/?ref=rp
// https://www.cs.auckland.ac.nz/compsci105s1c/lectures/Burkhard/Lecture29_ExercisesSolutions.pdf
// https://www.w3resource.com/c-programming-exercises/searching-and-sorting/c-search-and-sorting-exercise-2.php
// https://www.w3resource.com/java-exercises/sorting/java-sorting-algorithm-exercise-6.php
// https://runestone.academy/runestone/books/published/pythonds/SortSearch/TheSelectionSort.html

#include <iostream>

using namespace std;

const int AMAX = int(1e6);

int a[AMAX];

void SelectionSort (int a[], int n) {
	for (int i = 0; i < n - 1; ++i) {
		int idMin = i;
		for (int j = i + 1; j < n; ++j) {
			if (a[j] < a[idMin]) {
				idMin = j;
			}
		}
		if (idMin != i) {
			swap(a[idMin], a[i]);
		}
	}	
}

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	SelectionSort(a, n);
	
	for (int i = 0; i < n; ++i) {
		cout << a[i] << " ";
	}
}

// Input
// 5
// 64 25 12 22 11


// Output
// 11 12 22 24 64

// Time Complexity: O(n2) 
// Auxiliary Space: O(1)
// The default implementation is not stable.