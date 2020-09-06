/*
* @Author: tanht
* @Date:   2020-09-06 18:54:19
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-06 20:41:40
* @Email: tanht.lavamyth@gmail.com
*/

// References: 
// http://www.cplusplus.com/doc/tutorial/arrays/
// https://www.geeksforgeeks.org/arrays-in-c-cpp/
// https://www.tutorialspoint.com/cplusplus/cpp_arrays.htm
// https://www.programiz.com/cpp-programming/arrays
// https://www.programiz.com/c-programming/c-multi-dimensional-arrays
// https://www.cpp.edu/~elab/ECE114/Array.html
// https://en.cppreference.com/w/cpp/container/array
// https://docs.microsoft.com/en-us/cpp/cpp/arrays-cpp?view=vs-2019

#include <iostream>
#include <array>

using namespace std;

// An array is a series of elements of the same type placed in contiguous memory, is referenced by adding an index to a unique identifier.

int foo [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};	
// initialize array with 10 elements
// arrays are blocks of static memory whose size must be determined at compile time
// int foo[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};	// we can ignore size, the equal sign and  is also acceptable

// By default, regular arrays of local scope (for example, those declared within a function) are left uninitialized.
// Static arrays, and those declared directly in a namespace (outside any function), are always initialized.
// If no explicit initializer is specified, all the elements are default-initialized (with zeroes, for fundamental types).

void doArrayContainer();

int main() {
	for (int i = 0; i < 10; ++i) {
		foo[i] += 1; // access the values and increase by 1
	}
	for (int i = 0; i < 10; ++i) {
		cout << foo[i] << " ";
	} 
	cout << '\n';

	int jimmy [3][5]; // is equivalent to int jimmy [15] (3 * 5 = 15) in a two-dimensional table

	// For example, a function with a multidimensional array as argument could be:
	// void procedure (int myarray[][3][4])

	// The above array structure are, but by restricting its copy and easily decay into pointers, they probably suffer from an excess of optimization.
	// To overcome these above limits, suffice it to say that they operate in a similar way to built-in arrays, except that they allow being copied (an actually expensive operation that copies the entire block of memory, and thus to use with care) and decay into pointers only when explicitly told to do so (by means of its member data).
	doArrayContainer();
}


void doArrayContainer() {
	array<int, 3> arrayContainer {1, 2, 3};
	for (int i = 0; i < arrayContainer.size(); ++i) {
		++ arrayContainer[i];
	}
	for (int item : arrayContainer) {
		cout << item << " ";
	}
}