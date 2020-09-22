/*
* @Author: tanht
* @Date:   2020-09-22 07:20:22
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-22 07:44:12
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>
#include <array>

using namespace std;

const int AMAX = 101;

array<int, AMAX> a;

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	int idOfMin = 0, idOfMax = 0;
	for (int i = 1; i < n; ++i) {
		if (a[i] < a[idOfMin]) {
			idOfMin = i;
		}
		if (a[i] > a[idOfMax]) {
			idOfMax = i;
		}
	}

	// then do st
}