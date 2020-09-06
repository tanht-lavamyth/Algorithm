/*
* @Author: tanht
* @Date:   2020-09-03 04:46:03
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-03 04:47:30
* @Email: tanht.lavamyth@gmail.com
*/

// Source: https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/tutorial/
#include <iostream>

using namespace std;

const int AMAX = 107;

int a[AMAX];

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	int countSwap = 0;
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < (n - 1) - i; ++j) {
			if (a[j] > a[j + 1]) {
				swap (a[j], a[j + 1]);
				++countSwap;
			}
		}
	}

	cout << countSwap;
}