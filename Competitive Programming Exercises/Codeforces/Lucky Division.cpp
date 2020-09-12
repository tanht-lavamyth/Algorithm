/*
* @Author: tanht
* @Date:   2020-09-12 09:39:49
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-12 09:49:38
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>

using namespace std;


bool LuckyNumber(int n) {
	while (n > 0) {
		int decimalDigit = n % 10;
		if (decimalDigit != 4 && decimalDigit != 7) {
			return false;
		}
		n /= 10;
	}
	return true;
}

bool AlmostLuckyNumber(int n) {
	for (int i = 4; i <= 1000; ++i) {
		if (LuckyNumber(i)) {
			if (n % i == 0) {
				return true;
			}
		}
	}
	return false;
}

int main() {
	int n; cin >> n;
	if (LuckyNumber(n) || AlmostLuckyNumber(n)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}