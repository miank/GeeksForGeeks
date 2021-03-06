// BitwiseOperator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
// Function Prototype
void bitWiseOperation(int, int, int);
//Position this line where user code will be pasted.
// Driver code to test above function
int main() {

	int t;
	cin >> t;

	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;

		bitWiseOperation(a, b, c);
	}

	return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
// Function to perform bitwise manipulations
// a, b and c are input integers
void bitWiseOperation(int a, int b, int c) {

	// Your code here
	int d = a ^ a;
	cout << d << endl;
	int e = c ^ b;
	cout << e << endl;
	int f = a & b;
	cout << f << endl;
	int g = c | (a ^ a);
	cout << g << endl;
	cout << ~e << endl;
}