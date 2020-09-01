/*
* @Author: tanht
* @Date:   2020-09-01 20:15:07
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-01 21:14:14
* @Email: tanht.lavamyth@gmail.com
*/
#include <iostream>

using namespace std;

const int AMAX = 1007;

int a[AMAX], splitedA[AMAX];

int main() {
	int N; cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> a[i];
	}

	int zombiesPower = 0, vampiresPower = 0, numVampiresPower = 1;
	for (int i = 0; i < N; ++i) {
		if (a[i] % 2) {
			zombiesPower += a[i];
		}
		else {
			vampiresPower += a[i];
			++numVampiresPower;
		}
	}
	a[N++] = zombiesPower;
	a[N++] = vampiresPower;


	for (int i = 0; i < N - 1; ++i) {
		int idMin = i;
		for (int j = i + 1; j < N; ++j) {
			if (a[j] < a[idMin]) {
				idMin = j;
			}
		}
		if (i != idMin) {
			swap(a[i], a[idMin]);
		}
	}


	for (int i = 0; i < N; ++i) {
		cout << a[i] << " ";
	}
	cout << '\n';

	int zombieId = 0;
	for (int i = 0; i < N; ++i) {
		if (a[i] % 2 == 0) {
			splitedA[zombieId++] = a[i];
		}
		else {
			splitedA[numVampiresPower++]	= a[i];
		}
	}

	for (int i = 0; i < N; ++i) {
		cout << splitedA[i] << " ";
	}
}