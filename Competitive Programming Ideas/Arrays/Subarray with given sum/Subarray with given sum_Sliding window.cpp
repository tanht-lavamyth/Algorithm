/*
* @Author: tanht
* @Date:   2020-08-30 12:04:57
* @Last Modified by:   tanht
* @Last Modified time: 2020-08-30 12:10:03
* @Email: tanht.lavamyth@gmail.com
*/

// Problem: https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0
// Ideas: https://www.geeksforgeeks.org/find-subarray-with-given-sum/

#include <iostream>

using namespace std;

const int  AMAX = (int)1e7 + 7;
typedef long long LL;

LL a[AMAX];

// ----------------- NATURAL WAY -----------------
void findSubArrayWithGivenSum(int N, LL a[], int s) {
	bool isHavingResult = false;
	LL totalSum = 0, left = 1;
	for (int  i = 1; i <= N; ++i) {
		totalSum += a[i];
		while (totalSum > s) {
			totalSum -= a[left++];
		}
		if (totalSum == s) {
			isHavingResult = true;
			cout << left << " " << i;
			break;
		}
	}
	if (isHavingResult == false) {
		cout << "-1";
	}

	cout << '\n';

	// The complexity is O(n), but only applying non-negative integers
}

int main() {
	int T; cin >> T;
	for (int t = 1; t <= T;  ++t) {
		int N, s; cin >> N >> s;
		for (int i = 1; i <= N; ++i) {
			cin >> a[i];
		}

		findSubArrayWithGivenSum(N, a, s);	
	}
}

// Input
// 3
// 5 12
// 1 2 3 7 5
// 10 15
// 1 2 3 4 5 6 7 8 9 10
// 8 23
// 15 2 4 8 9 5 10 23

// Output
// 2 4
// 1 5
// 2 5
