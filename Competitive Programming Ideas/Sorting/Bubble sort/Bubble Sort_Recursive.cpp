/*
* @Author: tanht
* @Date:   2020-09-03 09:17:50
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-03 09:23:21
* @Email: tanht.lavamyth@gmail.com
*/
#include <iostream>

using namespace std;

const int AMAX = 1007;

int a[AMAX];

void RecursiveBubbleSort(int a[], int n, int i, int j)  {
	if (i < n - 1) {
		if (j < (n - 1) - i) {
			if (a[j] > a[j + 1]) {
				swap (a[j], a[j + 1]);
			}

			RecursiveBubbleSort(a, n, i, j +  1);
		}
		else {
			RecursiveBubbleSort(a, n, i + 1, 0);
		}
	}
}

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	RecursiveBubbleSort(a, n, 0, 0);

	for (int i = 0; i < n; ++i) {
		cout << a[i] << " ";
	}
}