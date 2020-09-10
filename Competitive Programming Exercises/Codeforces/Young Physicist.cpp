/*
* @Author: tanht
* @Date:   2020-09-10 04:53:50
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-10 04:57:01
* @Email: tanht.lavamyth@gmail.com
*/
#include <iostream>

using namespace std;

int main (){
	int n; cin >> n;
	int x, y, z, sumX = 0, sumY = 0, sumZ = 0;
	for (int i = 0; i < n; ++i) {
		cin >> x >> y >> z;
		sumX += x;
		sumY += y;
		sumZ += z;
	}

	if (sumX == 0 && sumY == 0 && sumZ == 0) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}