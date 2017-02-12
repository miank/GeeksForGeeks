//// SumArray.cpp : Given an integer array find sum of it.
//
//Input:
//First line contains an integer, the number of test cases 'T' Each test case should contain an integer, size of array 'N' in the first line.In the second line Input the integer elements of the array in a single line separated by space.
//
//Output:
//	Print the sum in seperate line.
//		Constraints :
//
//		1 <= T <= 30
//
//		1 <= N <= 100
//
//		1 <= Arr[i] <= 100
//
//		Example:
//
//	Input
//		1
//		4
//		1 2 3 4
//
//		Output :
//		10
//
//		* *For More Examples Use Expected Output**
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0), n(0), sum(0);
	cin >> t;
	cin >> n;

	int *arr = new int[n];

	while (t > 0)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			sum = sum + arr[i];
		}
		t--;
	}

	cout << sum << endl;


	return 0;
}

