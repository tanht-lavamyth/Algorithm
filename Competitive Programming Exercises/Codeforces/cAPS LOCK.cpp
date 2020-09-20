/*
* @Author: tanht
* @Date:   2020-09-20 11:06:19
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-20 11:17:33
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>

using namespace std;

bool isSatisfiedRules(string s) {
	bool isRuleOne = true;
	for (int i = 0; i < (int)s.size(); ++i) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			isRuleOne = false;
			break;
		}
	}
	if (isRuleOne) {
		return true;
	}

	bool isRuleTwo = true;
	if (s[0] >= 'A' && s[0] <= 'Z') {
		isRuleTwo = false;
	}
	for (int i = 1; i < (int)s.size(); ++i) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			isRuleTwo = false;
			break;
		}
	}
	if (isRuleTwo) {
		return true;
	}

	return false;
}

string transform(const string s) {
	string copyS = s;
	for (int i = 0; i < (int)copyS.size(); ++i) {
		if (copyS[i] >= 'a' && copyS[i] <= 'z') {
			copyS[i] = char(copyS[i] - 32);
		} else {
			copyS[i] = char(copyS[i] + 32);
		}
	}
	return copyS;
}

int main() {
	string s; cin >> s;

	if (isSatisfiedRules(s)) {
		s = transform(s);
	}
	cout << s;
}