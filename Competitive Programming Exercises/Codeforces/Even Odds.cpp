/*
* @Author: tanht
* @Date:   2020-09-21 05:39:58
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-21 05:46:50
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>

using namespace std;

int main() {
	long long n, k; cin >> n >> k;
	
	long long oldNumCounts = n / 2;
	if (n % 2) {
		++oldNumCounts;
	}

	if (k <= oldNumCounts) {
		cout << 2*k - 1;
	} else {
		cout << 2 * (k - oldNumCounts);
	}
}