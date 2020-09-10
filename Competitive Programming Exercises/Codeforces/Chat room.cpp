/*
* @Author: tanht
* @Date:   2020-09-10 07:29:22
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-10 07:57:41
* @Email: tanht.lavamyth@gmail.com
*/
#include <iostream>

using namespace std;

char helloChar [] {'h', 'e', 'l', 'l', 'o'};

int main() {
	string s; cin >> s;

	bool isContainedHello = false;
	int helloCharId = 0;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == helloChar[helloCharId]) {
			++helloCharId;
		}
		if(helloCharId == 5) {
			isContainedHello = true;
			break;
		}
	}

	if (isContainedHello) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}