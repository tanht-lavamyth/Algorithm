/*
* @Author: tanht
* @Date:   2020-09-20 11:59:03
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-20 12:03:57
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>

using namespace std;

const int AMAX  = int(1e5);

string s[AMAX];

int main() {
	int n ; cin >> n;
	for (int  i = 0; i < n; ++i) {
		cin >> s[i];
	}

	int magnetsGroupNumbers = 1;
	for (int  i = 0; i < n - 1; ++i) {
		if (s[i] != s[i + 1]) {
			++magnetsGroupNumbers;
		}
	}

	cout << magnetsGroupNumbers;
}