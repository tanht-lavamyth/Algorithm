/*
* @Author: tanht
* @Date:   2020-09-02 19:57:15
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-02 20:58:20
* @Email: tanht.lavamyth@gmail.com
*/
// Source: https://www.hackerearth.com/practice/algorithms/sorting/insertion-sort/practice-problems/algorithm/the-rise-of-the-weird-things-1/

#include <iostream>

using namespace std;

const int AMAX = 1007;

int zombiesPowers[AMAX], vampiresPowers[AMAX];

void ImprovedSelectionSort(int a[], int N) {
	for (int leftId = 0, rightId = N - 1; leftId < rightId; ++leftId, --rightId) {
		int minId = leftId, maxId = rightId;
		for (int i = leftId; i <= rightId; ++i) {
			if (a[i] < a[minId]) {
				minId = i;
			}
			if (a[i] > a[maxId]) {
				maxId = i;
			}
		}

		if (a[minId] != a[maxId]  && !(minId == leftId && maxId == rightId)) {
			swap (a[leftId], a[minId]);
			if (maxId == leftId) {
				swap (a[rightId], a[minId]);
			}
			else {
				swap (a[rightId], a[maxId]);
			}
		}
	}
}

int main () {
	int N; cin >> N;
	int zombiesPowersId = 0, vampiresPowersId = 0;
	int zombiesPowersSum = 0, vampiresPowersSum = 0;
	for (int  i = 0; i < N; ++i) {
		int input; cin >> input;
		if (input % 2 == 0) {
			zombiesPowers[zombiesPowersId++] = input;
			zombiesPowersSum += input;
		}
		else {
			vampiresPowers[vampiresPowersId++] = input;
			vampiresPowersSum += input;
		}
	}
	zombiesPowers[zombiesPowersId++] = zombiesPowersSum;
	vampiresPowers[vampiresPowersId++] = vampiresPowersSum;

	ImprovedSelectionSort(zombiesPowers, zombiesPowersId);
	ImprovedSelectionSort(vampiresPowers, vampiresPowersId);

	for (int i = 0; i < zombiesPowersId; ++i) {
		cout << zombiesPowers[i] << " ";
	}
	for (int i = 0; i < vampiresPowersId; ++i) {
		cout << vampiresPowers[i] << " ";
	}
}