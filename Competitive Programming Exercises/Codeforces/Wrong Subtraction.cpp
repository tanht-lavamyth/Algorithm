/*
* @Author: tanht
* @Date:   2020-09-15 16:12:53
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-15 16:12:55
* @Email: tanht.lavamyth@gmail.com
*/
#include <iostream>

using namespace std;

int main() {
	int n, k; cin >> n >> k;
	
	for (int i = 0; i < k;  ++i) {
		if (n % 10 != 0) {
			--n;
		}
		else {
			n /= 10;
		}
	}

	cout << n;
}