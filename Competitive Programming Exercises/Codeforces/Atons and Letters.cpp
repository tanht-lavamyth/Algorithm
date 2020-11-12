/*
* @Author: tanht
* @Date:   2020-09-28 04:49:48
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-28 05:00:02
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>
#include <vector>

using namespace std;


int main() {
	string str; getline(cin, str);
	
	vector<char> distinctLetters;
	for (int i = 0; i < int(str.size()); ++i) {
		if (str[i] == '{' || str[i] == '}' || str[i] == ' ' || str[i] == ',') {
			continue;
		}

		bool exist = false;
		for (int j = 0; j < int(distinctLetters.size()); ++j) {
			if (str[i] == distinctLetters[j]) {
				exist = true;
				break;	
			}
		}

		if (!exist) {
			distinctLetters.push_back(str[i]);
		}
	}

	cout << (int)distinctLetters.size();
}