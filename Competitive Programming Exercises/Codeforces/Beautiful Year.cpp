/*
* @Author: tanht
* @Date:   2020-09-20 08:38:53
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-20 08:43:04
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>

using namespace std;

bool checkDistinctDigits(int n) {
	int digits[10] = {0}, copyN = n;
	while (copyN) {
		if (digits[copyN % 10]) {
			return false;
		}
		++digits[copyN % 10];
		copyN /= 10;
	} 

	return true;
}

int main() {
	int y; cin >> y;

	int copyY = y;
	++copyY;
	while (!checkDistinctDigits(copyY)) {
		++copyY;
	}

	cout << copyY;
} 