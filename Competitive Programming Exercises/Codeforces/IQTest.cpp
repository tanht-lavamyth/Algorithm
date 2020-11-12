/*
* @Author: tanht
* @Date:   2020-09-28 04:38:14
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-28 04:43:24
* @Email: tanht.lavamyth@gmail.com
*/
#include <iostream>
#include <array>

using namespace std;

const int AMAX = 101;

array<int, AMAX> a;

int main() {
	int n; cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}

	int countEvenNumbers = 0;
	for (int i = 1; i <= n; ++i) {
		if (a[i] % 2 == 0) {
			++countEvenNumbers;
		}
	}

	if (countEvenNumbers % 2 == 1) {
		for (int i = 1; i <= n; ++i) {
			if (a[i] % 2 == 0) {
				cout << i;
				break;
			}
		}
	} else {
		for (int i = 1; i <= n; ++i) {
			if (a[i] % 2 == 1) {
				cout << i;
				break;
			}
		}
	}
}