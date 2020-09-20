/*
* @Author: tanht
* @Date:   2020-09-12 09:28:47
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-12 09:30:59
* @Email: tanht.lavamyth@gmail.com
*/
#include <iostream>

using namespace std;

int main() {
	double a, b; cin >> a >> b;
	
	int yearNums = 0;
	do {
		a *= 1.5;
		++yearNums;
	} while (a <= b);

	cout << yearNums;
}