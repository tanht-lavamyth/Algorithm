/*
* @Author: tanht
* @Date:   2020-09-22 07:06:37
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-22 07:09:32
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>
#include <array>

using namespace std;

const int AMAX = 101;

array<int, AMAX> passedLevel = {false};

int main() {
	int n; cin >> n;
	int p, x; cin >> p;
	for (int i = 1; i <= p; ++i) {
		cin >> x;
		passedLevel[x] = true;
	}
	cin >> p;
	for (int i = 1; i <= p; ++i) {
		cin >> x;
		passedLevel[x] = true;
	}

	bool passingAllLevels = true;
	for (int i = 1; i <= n; ++i) {
		if(passedLevel[i] == false) {
			passingAllLevels = false;
		}
	}

	if (passingAllLevels) {
		cout << "I become the guy.";
	} else {
		cout << "Oh, my keyboard!";
	}
}