/*
* @Author: tanht
* @Date:   2020-09-21 07:18:34
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-21 07:29:07
* @Email: tanht.lavamyth@gmail.com
*/

// Reference: https://www.geeksforgeeks.org/merge-sort/

#include <iostream>

using namespace std;

const int AMAX = int(1e5);

int a[AMAX];


// Merge 2 arrays: a[l...m] and a[m + 1...r] 
void Merge(int a[], int l, int m, int r) {
	int n1 = m - l + 1, n2 = r - m;
	int m1[n1] = {0}, m2[n2] = {0};

	for (int  i = 0; i < n1; ++i) {
		m1[i] = a[l + i];
	} 
	for (int  i = 0; i < n2; ++i) {
		m2[i] = a[m + 1 + i];
	}

	int i = 0, j = 0, k = l;
	while(i < n1 && j < n2) {
		if(m1[i] < m2[j]) {
			a[k] = m1[i];
			++i;
		} else {
			a[k] = m2[j];
			++j;
		}
		++k;
	}

	while (i < n1) {
		a[k++] = m1[i++];
	}
	while (j < n2) {
		a[k++] = m2[j++];
	}

}

void MergeSort(int a[], int l, int r) {
	if (l < r) {
		int m = l + (r - l) /2;
		MergeSort(a, l, m);
		MergeSort(a, m + 1, r);
		Merge(a, l, m, r);
	}
}

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	MergeSort(a, 0, n - 1);

	for (int  i = 0; i < n; ++i) {
		cout << a[i] <<" ";
	}
}

// INPUT
// 10
// 3 51 12 3 35421 12 33 4 6 2

// OUTPUT
// 2 3 3 4 6 12 12 33 51 35421 