// C++_Input_Output.cpp 
//
//Read 2 integer from stdin and display their product to stdout.
//
//Input:
//The first line of input contains integer T denoting the number of test cases.For each test case, there is a line containing two integers a, b.
//
//Output:
//	For each test case, there is a line displaying the product of a and b.
//
//	Constraints:
//		1 <= T <= 100
//			0 <= a, b <= 100
//
//			Example :
//			Input :
//			3
//			2 6
//			3 7
//			8 3
//			Output :
//			12
//			21
//			24


#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t(0), a(0), b(0);
	cin >> t;

	while (t--)
	{
		cin >> a >> b;
		int result = a * b;
		cout << result << endl;
	}
	return 0;
}
