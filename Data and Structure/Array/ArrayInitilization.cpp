/*
* @Author: tanht
* @Date:   2020-09-06 18:54:19
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-09 13:40:25
* @Email: tanht.lavamyth@gmail.com
*/

// References: 
// https://docs.microsoft.com/en-us/cpp/cpp/arrays-cpp?view=vs-2019

#include <iostream>
#include <array>

using namespace std;

constexpr size_t size = 1000;

void HeapBasedArray(size_t size) {
	double* numbers = new double[size] {0};

	numbers[0] = 1;
	for (size_t i = 1; i < size; ++i) {
		numbers[i] = i + 10;
	}

	// for (size_t i = 0; i < size; ++i) {
	// 	cout << numbers[i] << " ";
	// }

	// LOOP THROUGH
	// double* p = numbers;
	// for (size_t i = 0; i < size; ++i) {
	// 	cout << *p++ << " "; 	// it means: *(p++); * is an dereference operator
	// }
	// OR

	double* p = numbers;
	while (p < numbers + size) {
		cout << *p++ << " ";
	}

}

int main() {
	// Declare an array of doubles to be allocated on the stack
	// Stack-based arrays are faster to allocate and access than heap-based arrays. However, stack space is limited. The number of array elements can't be so large that it uses up too much stack memory. 
	// double numbers[size] {0};

	// numbers[0] = 1;
	// for (size_t i = 1; i < size; ++i) {
	// 	numbers[i] = i + 1;
	// }

	// for (size_t i = 0; i < size; ++i) {
	// 	cout << numbers[i] << " ";
	// }

	HeapBasedArray(size);
}

