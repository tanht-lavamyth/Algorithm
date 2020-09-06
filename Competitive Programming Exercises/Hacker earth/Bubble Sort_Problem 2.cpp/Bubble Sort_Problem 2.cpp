/*
* @Author: tanht
* @Date:   2020-09-03 04:52:42
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-03 04:58:48
* @Email: tanht.lavamyth@gmail.com
*/

// Source: https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/bubble-sort-15-8064c987/
#include <iostream>

using namespace std;

const int AMAX = 5007;

int a[AMAX];

int countSwapsInBubbleSort(int a[], int n) {
	int numSwaps = 0;
	for (int i = 0; i < n - 1; ++i) {
		bool isAnySwap = false;
		++numSwaps;
		for (int j = 0; j < (n - 1) - i; ++j) {
			if (a[j] > a[j + 1]) {
				swap (a[j], a[j + 1]);
				isAnySwap = true;
			}
		}
		if (!isAnySwap) {
			break;
		}
	}

	return numSwaps;
}

int main () {
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	int numberSwaps = countSwapsInBubbleSort(a, n);

	cout << numberSwaps;
}

// Input
// 5
// 1 3 2 5 4

// Output
// 2