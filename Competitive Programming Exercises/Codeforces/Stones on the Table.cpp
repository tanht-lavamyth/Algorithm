#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;
	int sLength = (int)s.size();

	int c = 0;
	for (int i = 1; i < sLength; ++i) {
		if (s[i] == s[i-1]) {
			++c;
		}
	}

	cout << c;
}