/*
* @Author: tanht
* @Date:   2020-09-10 04:58:39
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-10 05:01:57
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>

using namespace std;

int main() {
	int k, n, w; cin >> k >> n >> w;

	int totalMoney = 0;
	for (int i = 0; i < w; ++i) {
		totalMoney += k * (i + 1);
	}

	if (totalMoney > n) {
		cout << totalMoney - n;
	}
	else {
		cout << 0;
	}
}