/*
* @Author: tanht
* @Date:   2020-09-21 05:35:07
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-21 05:37:48
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	
	string feelingString = "I hate ";
	for (int i = 2; i <= n;  ++i) {
		if (i % 2 == 0) {
			feelingString += "that I love ";
		} else {
			feelingString += "that I hate ";
		}
	}  
	feelingString += "it";

	cout << feelingString;
}