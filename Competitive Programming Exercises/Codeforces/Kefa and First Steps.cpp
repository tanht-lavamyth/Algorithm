/*
* @Author: tanht
* @Date:   2020-09-20 10:56:30
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-20 11:04:14
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>

using namespace std;

const int AMAX = int(1e5);

int a[AMAX];

int main() {
	int n; cin >> n;
	for (int  i = 0; i < n; ++i) {
		cin >> a[i];
	}

	int maxNonDecreasingSub = 1, nonDecreasingSub = 1;
	for (int i = 0; i < n - 1; ++i) {
		if (a[i] <= a[i + 1]) {
			++nonDecreasingSub;
		} else {
			maxNonDecreasingSub = max (maxNonDecreasingSub, nonDecreasingSub);
			nonDecreasingSub = 1;
		}
	}

	cout << max(maxNonDecreasingSub, nonDecreasingSub) ;
}