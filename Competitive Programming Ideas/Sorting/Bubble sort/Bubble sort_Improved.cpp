/*
* @Author: tanht
* @Date:   2020-09-02 22:54:45
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-02 22:57:51
* @Email: tanht.lavamyth@gmail.com
*/

// Source: https://www.geeksforgeeks.org/bubble-sort/
#include <iostream>

using namespace std;

const int AMAX = 1007;

int a[AMAX];

void ImprovedBubleSort(int a[], int n) {
	for (int i = 0; i < n-1; ++i) {
		bool isAnySwap = false;
		for (int j = 0; j < (n-1) - i; ++j) {
			if (a[j] > a[j+1]) {
				isAnySwap = true;
				swap (a[j], a[j+1]);
			}
		}
		if (!isAnySwap) {
			break;
		}
	}
}

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	ImprovedBubleSort(a, n);

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
