// MajorityElement.cpp : Majority Element: A majority element in an array A[] of size n is an element that appears more than n/2 times 
// (and hence there is at most one such element).

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n(0), num(0), count(0);
	cout << "Enter the no of elements " << endl;
	cin >> n;
	int *arr = new int[n];
	int maj_ele = ceil(n / 2);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == maj_ele)
		{
			count++;
		}
	}
	if (count > maj_ele)
		cout << count;
	else
		cout << "NONE" << endl;
    return 0;
}

