/*
* @Author: tanht
* @Date:   2020-08-30 11:32:30
* @Last Modified by:   tanht
* @Last Modified time: 2020-08-30 12:10:19
* @Email: tanht.lavamyth@gmail.com
*/

// Problem: https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0
// Ideas: https://www.geeksforgeeks.org/find-subarray-with-given-sum/

#include <iostream>

using namespace std;

typedef long long LL;

const int  AMAX = (int)1e7 + 7;
LL a[AMAX];

// ----------------- NATURAL WAY -----------------
void findSubArrayWithGivenSum(int N, LL a[], int s) {
	bool isHavingResult = false;

	for (int  i = 1; i <= N; ++i) {
		LL totalSum = a[i];
		if (totalSum == s) {
			cout << i << " " << i;
			break;
		}
		
		for (int j = i + 1; j <= N; ++j) {
			if (totalSum + a[j] > s) {
				break;
			}
			
			totalSum += a[j];
			if (totalSum == s) {
				cout << i << " " << j;
				isHavingResult = true;
				break;
			}
		}
		if (isHavingResult) {
			break;
		}
	}
	if (isHavingResult == false) {
		cout << "-1";
	}

	cout << '\n';
	// The complexity is O(n^2)
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
