/*
* @Author: tanht
* @Date:   2020-09-12 09:33:34
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-12 09:36:21
* @Email: tanht.lavamyth@gmail.com
*/
#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int a, b, minCapacity = 0, numPassengers = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		numPassengers = numPassengers - a + b;
		minCapacity = max(minCapacity, numPassengers);
	}

	cout << minCapacity;
}