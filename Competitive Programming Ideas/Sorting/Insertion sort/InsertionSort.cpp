/*
* @Author: tanht
* @Date:   2020-09-12 13:35:06
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-12 14:10:07
* @Email: tanht.lavamyth@gmail.com
*/

// EXERCISE: https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/tutorial/

#include <iostream>

using namespace std;

#define AMAX 10000

int a[AMAX];

void InsertionSort (int a[], int n) {
	for (int i = 1; i < n; ++i) {
		int j = i, val = a[i];
		while (j - 1 >= 0 && a[j - 1] > val) {
			a[j] = a[j - 1];
			--j;
		}
		a[j] = val;
 	}
}

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	InsertionSort(a, n);

	for (int i = 0; i < n; ++i) {
		cout << a[i] << " ";
	}
}


// Input 1
// 5
// 5 1 4 2 8

// Output 1
// 1 2 4 5 8


// Input 2
// 7
// 64 34 25 12 22 11 90

// Output 2
// 11 12 22 25 34 64 90