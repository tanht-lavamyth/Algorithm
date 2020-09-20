/*
* @Author: tanht
* @Date:   2020-09-16 12:45:35
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-18 19:06:12
* @Email: tanht.lavamyth@gmail.com
*/
#include <iostream>

using namespace std;

int main() {
	int n, t; cin >> n >> t;
	string s; cin >> s;

	while (t--) {
		for (int i = 0; i < n - 1; ++i) {
			if (s[i] == 'B' && s[i + 1] == 'G') {
				s[i] = 'G';
				s[i + 1] = 'B';
				++i;
			}
		}
	}

	cout << s;
}