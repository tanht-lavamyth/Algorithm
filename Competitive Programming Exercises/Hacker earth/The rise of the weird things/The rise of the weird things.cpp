/*
* @Author: tanht
* @Date:   2020-09-01 20:15:07
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-01 22:58:27
* @Email: tanht.lavamyth@gmail.com
*/

// Source: https://www.hackerearth.com/practice/algorithms/sorting/insertion-sort/practice-problems/algorithm/the-rise-of-the-weird-things-1/description/

#include <iostream>

using namespace std;

const int AMAX = 1007;

int vampiresPowers[AMAX], zombiesPowers[AMAX];

void InsertionSort(int a[], int N) {
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
}

int main() {
	int N; cin >> N;

	int idZombie = 0, idVampire = 0;
	int sumZombiePower = 0, sumVampirePower = 0;
	for (int i = 0; i < N; ++i) {
		int input; cin >> input;
		if (input % 2 == 0) {
			zombiesPowers[idZombie++] = input;
			sumZombiePower += input;
		}
		else {
			vampiresPowers[idVampire++] = input;
			sumVampirePower += input;
		}
	}
	zombiesPowers[idZombie++] = sumZombiePower;
	vampiresPowers[idVampire++] = sumVampirePower;

	InsertionSort(zombiesPowers, idZombie);
	InsertionSort(vampiresPowers, idVampire);

	for (int i = 0; i < idZombie; ++i) {
		cout << zombiesPowers[i] << " ";
	}


	for (int i = 0; i < idVampire; ++i) {
		cout << vampiresPowers[i] << " ";
	}
}