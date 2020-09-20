/*
* @Author: tanht
* @Date:   2020-09-15 16:15:40
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-15 16:16:31
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>

using namespace std;

int main() {
	int x; cin >> x;
	
	if (x % 5 == 0) {
		cout << x / 5;
	}
	else {
		cout << x / 5 + 1;
	}
}