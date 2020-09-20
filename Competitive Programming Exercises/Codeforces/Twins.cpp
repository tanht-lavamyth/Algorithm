/*
* @Author: tanht
* @Date:   2020-09-15 16:22:16
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-15 16:31:27
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>
#include <algorithm>

using namespace std;

const int AMAX = 100;

int a[AMAX];

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	sort(a, a + n, greater<int>());

	int totalSumInAllCoins = 0;
	for (int i = 0; i < n; ++i) {
		totalSumInAllCoins += a[i];
	}

	int minimumTakenActions = 0, startingId = 0, totalSumEachTakenAction = 0;
	while (startingId < n) {
		++minimumTakenActions;
		totalSumEachTakenAction += a[startingId];
		if (2 * totalSumEachTakenAction - totalSumInAllCoins > 0) {
			break;
		}
		++startingId;
	}

	cout << minimumTakenActions;
}