/*
* @Author: tanht
* @Date:   2020-09-21 06:11:31
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-21 06:21:09
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>

using namespace std;

char Xor(char a, char b) {
	if (a != b) {
		return '1';
	}
	return '0';
}

int main() {
	string a, b; cin >> a >> b;
	for (int i = 0; i < (int)a.size(); ++i) {
		cout << Xor(a[i], b[i]);
	}
} 