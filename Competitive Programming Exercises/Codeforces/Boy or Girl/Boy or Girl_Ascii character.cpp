/*
* @Author: tanht
* @Date:   2020-08-26 13:02:27
* @Last Modified by:   tanht
* @Last Modified time: 2020-08-30 19:14:43
* @Email: tanht.lavamyth@gmail.com
*/
#include <iostream>

using namespace std;

const int AMAX = 100;

bool distinctChars[AMAX];

int main () {
	string s; cin >> s;
	int sLength = (int)s.size();

	for (int i = 0; i < sLength; ++i) {
		int decimalNumOfChar = int(s[i] - 'A');
		distinctChars[decimalNumOfChar] = true;	// range 'A' = 65 to 'z' = 122 in decimal (ascii table)
	}

	int countDistinctChars = 0;
	for (int i = 0; i < AMAX; ++i) {
		if (distinctChars[i]) {
			++countDistinctChars;
		} 
	}

	if (countDistinctChars%2 == 0) {
		cout << "CHAT WITH HER!";
	}
	else {
		cout << "IGNORE HIM!";
	}
}