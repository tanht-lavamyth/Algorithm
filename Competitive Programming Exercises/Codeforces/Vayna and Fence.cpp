/*
* @Author: tanht
* @Date:   2020-09-20 10:50:51
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-20 10:54:47
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>

using namespace std;

const int AMAX = 1000;

int a[AMAX];

int main() {
	int n, h; cin >> n >> h;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	int minValidWidth = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i] > h) {
			minValidWidth += 2;
		} else {
			minValidWidth += 1;
		}
	}

	cout << minValidWidth;
}