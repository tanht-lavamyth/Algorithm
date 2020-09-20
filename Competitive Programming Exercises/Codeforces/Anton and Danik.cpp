/*
* @Author: tanht
* @Date:   2020-09-19 17:53:00
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-20 10:46:18
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;

	int antonWinnumberCountss = 0;
	for (int i = 0; i < (int)s.size(); ++i) {
		if (s[i] == 'A') {
			++antonWinnumberCountss;
		}
	}

	if (2 * antonWinnumberCountss > n ) {
		cout << "Anton";
	} else {
		if (2 * antonWinnumberCountss < n ) {
			cout << "Danik";
		} else {
			cout << "Friendship";
		}
	}
}