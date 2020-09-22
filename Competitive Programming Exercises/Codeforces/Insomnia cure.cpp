/*
* @Author: tanht
* @Date:   2020-09-22 06:58:58
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-22 07:04:40
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>
#include <array>

using namespace std;

const int AMAX = int(1e5);

array<bool, AMAX> attacks = {false};

int main() {
	int k, l, m, n, d; cin >> k >> l >> m >> n >> d;

	for (int i = k; i <= d; i += k) {
		attacks[i] = true;
	}
	for (int i = l; i <= d; i += l) {
		attacks[i] = true;
	}
	for (int i = m; i <= d; i += m) {
		attacks[i] = true;
	}
	for (int i = n; i <= d; i += n) {
		attacks[i] = true;
	}

	int damagedDragons = 0;
	for (int i = 1; i <= d; ++i) {
		if (attacks[i]) {
			damagedDragons++;
		}
	}

	cout << damagedDragons;
}