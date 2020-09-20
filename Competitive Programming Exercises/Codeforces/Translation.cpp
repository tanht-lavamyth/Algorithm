/*
* @Author: tanht
* @Date:   2020-09-18 19:32:23
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-18 19:34:42
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>

using namespace std;

string reverseString(string s) {
	int sLen = s.size();
	for (int i = 0; i < sLen/2; ++i) {
		swap (s[i], s[sLen - 1 - i]);
	}
	return s;
}

int main() {
	string s, t; cin >> s >> t;

	string reversedT = reverseString(t);

	if (s == reversedT) {
		cout << "YES";
	} else {
		cout << "NO";
	}
}