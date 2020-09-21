/*
* @Author: tanht
* @Date:   2020-09-21 06:48:04
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-21 07:09:22
* @Email: tanht.lavamyth@gmail.com
*/

// Reference: https://www.geeksforgeeks.org/quick-sort/

#include <iostream>

using namespace std;

const int AMAX = int(1e5);

int a[AMAX];

// return the index of pivot, the pivot value is put in the right order
int Partition (int a[], int l, int r) {
	int pivotValue = a[r];
	int i = l - 1;
	for (int  j = l; j <= r - 1 ; ++j) {
		if (a[j] < pivotValue) {
			swap (a[++i], a[j]);
		}
	}
	swap(a[i + 1], a[r]);
	return i + 1;
}

void QuickSort (int a[], int l, int r) {
	if (l < r) {
		int pivotId = Partition(a, l, r);
		if (l < pivotId - 1) {
			QuickSort(a, l, pivotId - 1);
		}
		if (pivotId + 1 < r) {
			QuickSort(a, pivotId + 1, r);
		}
	}
}

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	QuickSort(a, 0, n - 1);

	for (int i = 0; i < n; ++i) {
		cout << a[i] << " ";
	}
}