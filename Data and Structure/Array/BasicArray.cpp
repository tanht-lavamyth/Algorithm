/*
* @Author: tanht
* @Date:   2020-09-06 18:54:19
* @Last Modified by:   tanht
* @Last Modified time: 2020-09-06 18:58:02
* @Email: tanht.lavamyth@gmail.com
*/

// References: 
// http://www.cplusplus.com/doc/tutorial/arrays/
// https://www.geeksforgeeks.org/arrays-in-c-cpp/
// https://www.tutorialspoint.com/cplusplus/cpp_arrays.htm
https://www.programiz.com/cpp-programming/arrays
https://www.programiz.com/c-programming/c-multi-dimensional-arrays
https://www.cpp.edu/~elab/ECE114/Array.html
https://en.cppreference.com/w/cpp/container/array
https://docs.microsoft.com/en-us/cpp/cpp/arrays-cpp?view=vs-2019

#include <iostream>

using namespace std;

int foo [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int main() {
	for (int i = 0; i < 10; ++i) {
		foo[i] += 1; // access the values and increase by 1
	}

	int jimmy [3][5]; // is equivalent to int jimmy [15] (3 * 5 = 15)
}

// An array is a series of elements of the same type placed in contiguous memory, is referenced by adding an index to a unique identifier.

