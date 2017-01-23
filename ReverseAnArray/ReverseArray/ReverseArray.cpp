// ReverseArray.cpp : http://www.practice.geeksforgeeks.org/problem-page.php?pid=78
// Given an array, print reverse of it. 

//Input:
//
//First line contains an integer, the number of test cases 'T' Each test case should contain an integer, size of array 'N' in the first line.In the second line Input the integer elements of the array in a single line separated by space.
//
//Output:
//
//	Print the array in reverse order in a single line separated by space.Each array is to be printed in separate line.
//
//		Constraints :
//
//		1 <= T <= 100
//
//		1 <= N <= 100
//
//		0 <= Arr[i] <= 100
//
//		Example:
//
//	Input
//		1
//		4
//		1 2 3 4
//
//		Output :
//		4 3 2 1
//
//		* *For More Examples Use Expected Output**

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0), n(0);
	int *arr = new int[n];
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (int k = n - 1; k >= 0; k--) {
			cout << arr[k] << " ";
		}
	}
		
    return 0;
}

