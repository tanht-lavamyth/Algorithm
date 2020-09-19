/*
* @Author: tanht
* @Date:   2020-09-19 17:47:36
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-19 19:56:14
* @Email: tanht.lavamyth@gmail.com
*/
#include <iostream>

using namespace std;

int main() {
	string s; cin >> s;

	bool isExectedAnyProgram = false;
	for (int i = 0; i < (int)s.size(); ++i) {
		if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
			isExectedAnyProgram = true;
			cout << "YES";
			break;
		}
	}
	if (!isExectedAnyProgram) {
		cout << "NO";
	}
}