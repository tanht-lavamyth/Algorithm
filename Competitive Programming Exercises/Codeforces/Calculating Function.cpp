/*
* @Author: tanht
* @Date:   2020-09-21 05:52:59
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-22 06:52:05
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>

using namespace std;

typedef long long LL;

int main() {
	LL n; cin >> n;
	
	// LL evenLastNumPos = n / 2;
	// //LL sumEVenNums = (2 + 2*evenLastNumPos)*evenLastNumPos / 2;
	// LL sumEVenNums = (1 + evenLastNumPos)*evenLastNumPos;

	// LL oldLastNumPos = n / 2 + n % 2;
	// // LL sumOldNums = (1 + 2 *oldLastNumPos - 1)*oldLastNumPos / 2;
	// LL sumOldNums = oldLastNumPos*oldLastNumPos;

	// cout<< sumEVenNums - sumOldNums;

	cout << n / 2 - (n % 2 + 2*(n/2*(n%2)));
}