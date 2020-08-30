#include <iostream>

using namespace std;

const int AMAX = 100;

bool distinctChars[AMAX];

int main () {
	string s; cin >> s;
	int sLength = (int)s.size();

	for (int i = 0; i < sLength; ++i) {
		distinctChars[s[i] - 'A'] = true;
	}

	int countDistinctChars = 0;
	for (int i = 0; i < AMAX; ++i) {
		if (distinctChars[i]) {
			++countDistinctChars;
		} 
	}

	if (countDistinctChars%2 == 0) {
		cout << "CHAT WITH HER!";
	}
	else {
		cout << "IGNORE HIM!";
	}
}