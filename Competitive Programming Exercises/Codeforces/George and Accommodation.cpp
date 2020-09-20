/*
* @Author: tanht
* @Date:   2020-09-20 08:36:39
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-20 08:37:26
* @Email: tanht.lavamyth@gmail.com
*/
#include <iostream>

using namespace std;

const int AMAX = 100;

int p[AMAX], q[AMAX];

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> p[i] >> q[i];
	}

	int availableRooms = 0;
	for (int i = 0; i < n; ++i) {
		if (q[i] - p[i] >= 2) {
			++availableRooms;
		}
	}

	cout << availableRooms;
}