/*
* @Author: tanht
* @Date:   2020-09-02 21:02:25
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-02 21:20:19
* @Email: tanht.lavamyth@gmail.com
*/

// Source: https://www.geeksforgeeks.org/bubble-sort/

#include <iostream>

using namespace std;

const int AMAX = 1007;

int a[AMAX];

void BubleSort(int a[], int n) {
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < (n - 1) - i; ++j) {
			if (a[j] > a[j + 1]) {
				swap (a[j], a[j + 1]);
			}
		}
	}
}

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	BubleSort(a, n);

	for (int i = 0 ; i < n; ++i) {
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