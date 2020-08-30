#include <iostream>

using namespace std;

int main() {
	string s; cin >> s;
	int sLength = s.size();
		
	bool isDangerous = false;
	for (int  i = 0; i <= sLength - 7; ++i) { 
		isDangerous = false;
		for (int j = i + 1; j < i + 7; ++j) {
			if (s[j] != s[i]) {
				isDangerous = false;
				break;
			}
			if (j == i + 6) {
				isDangerous = true;
			}
		}
		if (isDangerous) {
			break;
		}
	
	}
	if (isDangerous) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}
