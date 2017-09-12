// ReverseAnArray.cpp 

#include "stdafx.h"
#include<iostream>
#include <string>
using namespace std;

int main()
{
	int t(0), n(0), temp(0);
	cin >> t;
	int *arr;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		arr = new int[n];

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int start = 0;
		int end = n - 1;

		while (start < end)
		{
			temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;
			start++;
			end--;
		}
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	cout << endl;
    return 0;
}

