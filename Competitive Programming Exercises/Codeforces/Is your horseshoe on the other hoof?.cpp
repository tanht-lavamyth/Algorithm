/*
* @Author: tanht
* @Date:   2020-09-22 07:13:34
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-22 07:17:16
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>
#include <array>

using namespace std;

array<int, 4> colors;

int main() {
	for (int i = 0; i < 4; ++i) {
		cin >> colors[i];
	}

	for (int i = 0; i < 3; ++i) {
		for (int j = i + 1; j < 4; ++j) {
			if (colors[i] > colors[j]) {
				swap(colors[i], colors[j]);
			}
		}
	}

	int boughtHorseShoes = 0;
	for (int i = 0; i < 3; ++i) {
		if (colors[i] == colors[i + 1]) {
			boughtHorseShoes++;
		}
	}

	cout << boughtHorseShoes;
}