/*
* @Author: tanht
* @Date:   2020-09-18 19:23:58
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-18 19:28:46
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>

using namespace std;

bool checkLowerCase(char c) {
	if (c >= 'a' && c <= 'z') {
		return true;
	}
	return false;
}

string transformLowercase (string s) {
	for (int i = 0; i < (int)s.size(); ++i) {
		if (!checkLowerCase(s[i])) {
			s[i] = char (s[i] + 32);
		}
	}

	return s;
}

string tranformUppercase (string s) {
	for (int i = 0; i < (int)s.size(); ++i) {
		if (checkLowerCase(s[i])) {
			s[i] = char (s[i] - 32);
		}
	}

	return s;
}


int main() {
	string s; cin >> s;
	
	int sLen = s.size();
	int countLowercaseChar = 0;
	for (int i = 0; i < sLen; ++i) {
		if (checkLowerCase(s[i])) {
			++countLowercaseChar;
		}
	}

	if (countLowercaseChar + countLowercaseChar >= sLen) {
		s = transformLowercase(s);
	} else {
		s = tranformUppercase(s);
	}

	cout << s;
}