#include <iostream>

using namespace std;

const int AMAX = int(1e5) + 1;

int a[AMAX], s[AMAX];

int main() {
	int n, t; cin >> n >> t;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		s[i] = s[i-1] + a[i];
	}
	
	int i = 1, j = n, maxNumOfBooks = 0;
	if (s[n] <= t) {
		maxNumOfBooks = n;
	} else {
		while (i <= j && s[j] - s[i-1] > t) {
			if (s[j] < s[i]) {
				++i;
			} else {
				--j;
			}
		}
		if (i <= j) {
			maxNumOfBooks = j - i + 1;
		}
	}
	
	cout << maxNumOfBooks;
}
