/*
* @Author: tanht
* @Date:   2020-09-10 07:04:15
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-10 07:23:55
* @Email: tanht.lavamyth@gmail.com
*/

#include <iostream>
#include <array>
#include <iterator>
#include <algorithm>

using namespace std;

int main() {
	array<int, 3> a{1, 2, 3};
	sort (a.begin(), a.end())
	reverse_copy(a.begin(), a.end(), ostream_iterator<int>(cout, " ")); 	// reverse_copy is included in algorithm and ostream_iterator in iterator
	cout << '\n';

	// for (const auto& item: a) { 
	for (const int& item: a) {
		cout << item << " ";
	}
}