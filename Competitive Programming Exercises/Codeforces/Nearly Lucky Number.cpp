/*
* @Author: tanht
* @Date:   2020-09-18 19:12:22
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-18 19:22:40
* @Email: tanht.lavamyth@gmail.com
*/
#include <iostream>

using namespace std;

bool isLuckyNumber(int n) {
	if (n == 0) {
		return false;
	}
	while (n > 0) {
		if (n % 10 != 4 && n % 10 != 7) {
			return false;
		}
		n /= 10;
	}

	return true;
}

int main () {
	long long n; cin >> n;
	
	long long countLucklyDigits = 0, copyN = n;
	while (copyN > 0) {
		if (copyN % 10 == 4 || copyN % 10 == 7) {
			++countLucklyDigits;
		}
		copyN /= 10;
	}

	if (isLuckyNumber(countLucklyDigits)) {
		cout << "YES";
	} else {
		cout << "NO";
	}
}