/*
* @Author: tanht
* @Date:   2020-09-21 05:52:59
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-21 05:54:30
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	
	long long s = 0, sign = -1;
	for (int i = 1; i <= n; ++i) {
		s += sign * i;
		sign *= -1;
	}


	cout << s;
}