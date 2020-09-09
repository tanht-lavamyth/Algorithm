/*
* @Author: tanht
* @Date:   2020-09-06 18:54:19
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-09 19:48:21
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

	// If you use the name of a one-dimensional array without a subscript, it gets evaluated as a pointer to the array's first element.
	double* p = numbers;
	while (p < numbers + size) {
		cout << *p++ << " ";
	}
}

void SlackBasedArray (size_t size) {
	// Declare an array of doubles to be allocated on the stack
	// Stack-based arrays are faster to allocate and access than heap-based arrays. However, stack space is limited. The number of array elements can't be so large that it uses up too much stack memory.
	double numbers[size] {0};

	numbers[0] = 1;
	for (size_t i = 1; i < size; ++i) {
		numbers[i] = i + 1;
	}

	for (size_t i = 0; i < size; ++i) {
		cout << numbers[i] << " ";
	}

}

void PassingArrayToFunction(const int* a, const int n) {
// void PassingArrayToFunction (const int a[], const int n) {
	for (int i = 0; i < n; ++i) {
		cout << a[i] << " ";
	}
}

int main() {
	// SlackBasedArray(size);
	// HeapBasedArray(size);

	int a[] {1, 2, 3, 4, 5};
	PassingArrayToFunction(a, sizeof(a) / sizeof(a[0]));
}