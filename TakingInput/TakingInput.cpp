// TakingInput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include<iostream>
#include <string>
using namespace std;
void inputData();
//Position this line where user code will be pasted.
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		inputData();

	}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
void inputData()
{
	int a;
	string b;
	//Use cin to take input and cout a and b with a space between them. Also use an endl after output
	cin >> a >> b;
	cout << a << " " << b << endl;
}