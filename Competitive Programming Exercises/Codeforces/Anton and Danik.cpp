/*
* @Author: tanht
* @Date:   2020-09-19 17:53:00
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-19 17:55:06
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;

	int antonWinCounts = 0;
	for (int i = 0; i < (int)s.size(); ++i) {
		if (s[i] == 'A') {
			++antonWinCounts;
		}
	}

	if (2 * antonWinCounts > n ) {
		cout << "Anton";
	} else {
		if (2 * antonWinCounts < n ) {
			cout << "Danik";
		} else {
			cout << "Friendship";
		}
	}
}