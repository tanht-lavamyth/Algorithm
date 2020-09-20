/*
* @Author: tanht
* @Date:   2020-09-21 05:47:43
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-21 05:52:17
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>

using namespace std;

int main() {
	int a, b, c; cin >> a >> b >> c;

	int max1 = max (a * b * c, a + b + c);
	int max2 = max (a + b * c, a * b +c );
	int max3 = max ((a + b) * c, a * (b +c));
	
	cout << max(max(max1, max2), max3);	
}