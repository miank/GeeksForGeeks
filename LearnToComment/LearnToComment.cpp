// LearnToComment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void comment(int, int, int);
//Position this line where user code will be pasted.

int main()
{


	int t;
	cin >> t;

	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;
		comment(a, b, c);
	}

	return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
//Comment the part that outputs b
void comment(int a, int b, int c)
{
	cout << a << endl;
	//cout << b << endl;
	cout << c << endl;
}
