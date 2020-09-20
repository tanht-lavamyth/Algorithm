/*
* @Author: tanht
* @Date:   2020-09-21 05:59:41
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-21 06:06:37
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const int AMAX = 50;

array<int, AMAX> a = {0};

int main() {
	int n, m; cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		cin >> a[i];		
	}

	sort(a.begin(), a.begin() + m);
	int minPossibleDifference = (int)1e6;
	for (int i = 0; i < m - n + 1; ++i) {
		minPossibleDifference = min (minPossibleDifference, a[i + n - 1] - a[i]);
	}

	cout<< minPossibleDifference;
}
