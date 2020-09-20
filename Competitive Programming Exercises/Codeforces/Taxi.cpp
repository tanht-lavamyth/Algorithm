/*
* @Author: tanht
* @Date:   2020-09-19 17:58:01
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-19 22:04:45
* @Email: tanht.lavamyth@gmail.com
*/

// NEED TO DO AN EFFICIENT SOLUTION

#include <iostream>
#include <algorithm>

using namespace std;

const int AMAX  = (int)1e5;

int numberCounts[AMAX];

int main() {
	int n, x; cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		++numberCounts[x];
	}

	int minNumberTaxis = 0;
	minNumberTaxis += numberCounts[4] + min(numberCounts[3], numberCounts[1]);
	if (numberCounts[1] > numberCounts[3]) {
		numberCounts[1] -= numberCounts[3];
		numberCounts[3] = 0;

		numberCounts[2] += numberCounts[1] / 2;
		numberCounts[1] %= 2;
	} else {
		numberCounts[3] -= numberCounts[1];
		numberCounts[1] = 0;
		
		minNumberTaxis += numberCounts[3];
	}


	minNumberTaxis += numberCounts[2] / 2;
	numberCounts[2] %= 2;
	if (numberCounts[1] > 0 || numberCounts[2] > 0) {
		++minNumberTaxis;
	}

	cout << minNumberTaxis;
}