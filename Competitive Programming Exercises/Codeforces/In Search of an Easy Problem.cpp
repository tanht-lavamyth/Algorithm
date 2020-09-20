/*
* @Author: tanht
* @Date:   2020-09-21 05:33:48
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-21 05:34:07
* @Email: tanht.lavamyth@gmail.com
*/
#include <iostream>
#include <array>

using namespace std;

const int AMAX = 100;

array<int, AMAX> a = {0};

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	bool isAnyHardAnswer = false;
	for (int i = 0; i < n; ++i) {
		if (a[i] == 1) {
			isAnyHardAnswer = true;
			break;
		}
	}

	if (isAnyHardAnswer) {
		cout << "HARD";
	} else {
		cout << "EASY";
	}
}