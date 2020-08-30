#include <iostream>
// #include <cctype>

using namespace std;

const int DIFF_LOW_UP_CHARACTER  = 32;

string transformWordCapitalization(string s) {
	if (s[0] >= 'a' && s[0] <= 'z') {
		s[0] = char(s[0] - DIFF_LOW_UP_CHARACTER);
	}
	return s;
}

// string transformWordCapitalization(string s) {
// 	if (islower(s[0])) {
// 		s[0] = toupper(s[0]);
// 	}
// 	return s;
// }

int main() {
	string s; cin >> s;
	cout << transformWordCapitalization(s);
}