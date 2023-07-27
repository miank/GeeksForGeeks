// SizeOf.cpp 

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
// Function prototype
void dataTypes(int, float, double, long long, string);
//Position this line where user code will be pasted.
// Driver Code
int main()
{
	int a;
	float b;
	double c;
	long long l;
	string d;

	int t;
	cin >> t;

	while (t--) {

		cin >> a >> b >> c >> l >> d;

		dataTypes(a, b, c, l, d);
	}

	return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
// Function to find size of different data types
void dataTypes(int a, float b, double c, long long l, string d) {

	float p = b / c;
	cout << sizeof(p) << " ";
	double q = b / a;
	cout << sizeof(q) << " ";
	int r = c / a;
	cout << sizeof(r) << " ";
	long long m = r + l;
	cout << sizeof(m) << endl;;

	cout << sizeof(d) << " " << sizeof(d[3]) << endl;
}