/*
* @Author: tanht
* @Date:   2020-09-21 06:21:13
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-21 06:27:40
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>

using namespace std;

int main() {
	string s; cin >> s;

	string initialSong = "";
	bool isAddSeperateSpace = false;
	for (int i = 0; i < (int)s.size(); ++i) {
		if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
			isAddSeperateSpace = true;
			i += 2;
		} else {
			if (isAddSeperateSpace) {
				if (initialSong != "") {
					initialSong += " ";
				}
				isAddSeperateSpace = false;
			}
			initialSong += s[i];
		}
	}

	cout << initialSong;
}