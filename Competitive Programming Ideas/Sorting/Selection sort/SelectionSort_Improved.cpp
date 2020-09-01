/*
* @Author: tanht
* @Date:   2020-08-31 23:22:08
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-01 20:05:09
* @Email: tanht.lavamyth@gmail.com
*/

// Source: https://www.geeksforgeeks.org/sorting-algorithm-slightly-improves-selection-sort/#:~:text=As%20we%20know%2C%20selection%20sort,it%20at%20its%20correct%20position.
// Practice more: https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/

#include <iostream>

using namespace std;

const int AMAX = int(1e6);

int a[AMAX];

void SelectionSort(int a[], int n) {
	int leftId = 0, rightId = n - 1;
	while (leftId < rightId) {
		int minId = leftId, maxId = rightId;
		for (int i = leftId; i <= rightId; ++i) {
			if (a[i] < a[minId]) {
				minId = i;
			}
			if (a[i] > a[maxId]) {
				maxId = i;
			}

		}
		if (a[minId] != a[maxId] && !(leftId == minId && rightId == maxId)) {
			swap(a[leftId], a[minId]);
			if (maxId == leftId) {				// when the index of max value is the index of leftmost value
				swap(a[rightId], a[minId]);
			}
			else {
				swap(a[rightId], a[maxId]);
			}
		}
		++leftId;
		--rightId;
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
