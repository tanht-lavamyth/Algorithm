/*
* @Author: tanht
* @Date:   2020-09-20 10:48:13
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-20 10:49:15
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>

using namespace std;

const int AMAX = 101;

int a[AMAX];

int main() {
	int n, x; cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> x;
		a[x] = i;
	}

	for (int i = 1; i <= n; ++i) {
		cout << a[i] << " ";
	}
}