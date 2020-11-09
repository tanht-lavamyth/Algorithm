#include<iostream>

using namespace std;

int main() {
	int t; cin >> t;
	for (int i = 0; i < t; ++i) {
		int a, b; cin >> a >> b;
		if (a % b == 0) {
			cout << "0";
		} else {
			cout << (a/b + 1)*b - a;
		}
		cout << '\n';
	}
}
