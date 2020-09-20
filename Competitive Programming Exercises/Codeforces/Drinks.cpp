/*
* @Author: tanht
* @Date:   2020-09-21 06:33:54
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-21 06:36:20
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>
#include <array>

using namespace std;

const int AMAX = 100;

array<int, AMAX> a;

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i]; 
	}


	int volumeFractionPercent = 0, totalPercent = n * 100;
	for (int i = 0; i < n; ++i) {
		volumeFractionPercent += a[i];
	}

	cout << volumeFractionPercent * 100.0 / totalPercent;
}