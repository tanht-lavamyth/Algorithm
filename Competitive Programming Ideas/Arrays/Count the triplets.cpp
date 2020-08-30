/*
* @Author: tanht
* @Date:   2020-08-29 21:14:24
* @Last Modified by:   tanht
* @Last Modified time: 2020-08-30 12:30:57
* @Email: tanht.lavamyth@gmail.com
*/

// Problem: https://practice.geeksforgeeks.org/problems/count-the-triplets/0

#include <iostream>
#include <algorithm>

using namespace std;

const int AMAX = int(1e5 + 7);

int a[AMAX];

int countTriplets(int a[], int N) {
	int count = 0;
	sort(a, a + N);
	for (int i = N - 1; i >= 2; --i) {
		int l = 0, r = i - 1;
		while (l < r) {
			if (a[l] + a[r] == a[i]) {
				++count;
				++l;
				--r;
			}
			else {
				if (a[l] + a[r] > a[i]) {
					--r;
				}
				else {
					++l;
				}
			}
		}
	}

	if (count > 0) {
		return count;
	}
	return -1;
	
	// Be right when input are distinct integers
}

int main () {
	int T; cin >> T;
	while (T--) {
		int N; cin >> N;
		for (int i = 0; i < N; ++i) {
			cin >> a[i];
		}

		if (N < 3) {
			cout << "-1";
		}
		else {
			cout << countTriplets(a, N);
		}

		cout << '\n';
	}
}

// Input: 
// 3
// 4
// 1 5 3 2
// 3
// 3 2 7
// 5
// 1 2 3 4 5

// Output:
// 2
// -1
// 4


