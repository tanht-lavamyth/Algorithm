/*
* @Author: tanht
* @Date:   2020-08-30 22:54:20
* @Last Modified by:   tanht
* @Last Modified time: 2020-08-31 13:34:00
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>
#include <cstring>

using namespace std;

#define AMAX 50

bool marks[AMAX];

int main () {
	string s; cin >> s;

	int sLen = (int)s.size();
	memset(marks, false, sizeof(marks));
	bool flag = false;
	for (int i = 0; i < sLen; ++i) {
		int decimalNumOfChar = int(s[i] - 'A');
		if (marks[decimalNumOfChar] == false) {
			flag ^= true;
			marks[decimalNumOfChar] = true;
		}
	}

	if (flag) {
		cout << "IGNORE HIM!";
	}
	else {
		cout << "CHAT WITH HER!";
	}
}

// Read more bits: https://www.geeksforgeeks.org/check-whether-k-th-bit-set-not/