/*
* @Author: tanht
* @Date:   2020-08-30 11:27:05
* @Last Modified by:   tanht
* @Last Modified time: 2020-08-30 12:10:33
* @Email: tanht.lavamyth@gmail.com
*/

// Problem: https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0
// Ideas: https://www.geeksforgeeks.org/find-subarray-with-given-sum-in-array-of-integers/

#include <iostream>
#include <unordered_map>

using namespace std;

const int  AMAX = (int)1e7 + 7;
typedef long long LL;

unordered_map<LL, int> m;
LL a[AMAX];

//----------------- USING HASH -----------------
void findSubArrayWithGivenSum(int N, LL a[], int s) {
	LL totalSum = 0;
	m.clear();
	m[0] = 0; 
	bool isHavingResult = false;

	for (int i = 1; i <= N; ++i) {
		totalSum += a[i];
		if (totalSum - s >= 0 && m.count(totalSum - s) > 0) {	// OR: m.find(totalSum-s) != m.end()
			cout << m[totalSum - s] + 1 << " " << i;
			isHavingResult = true;
			break;
		}
		m[totalSum] = i;
	}

	if (!isHavingResult) {
		cout << "-1";
	}
	
	cout << '\n';

	// size_type count ( const key_type& k ) const: returns 1 if an element with that key exists in the container, and zero otherwise.
	/* 
		don't forget m[0] = 0 is case of starting index is 1, such as:
		n = 3, s = 2
		2 1 5
		The result is (1, 1)

		But another way we need to check in total == s after totalSum += a[i] to replace the setting m[0] = 0
	*/
	// check whether a particular key exists: m.count(key), m.find(key), operator[] (but it returns reference to the mapped value of the element with a key value equivalent to k, so difficult to check)
	// m.at(key) (but it throws an exception)
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
