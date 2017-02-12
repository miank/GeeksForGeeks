// CheckPair.cpp : Given an array A[] and a number x, check for pair in A[] with sum as x
// GeeksForGeeks.org

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int num(0), sum(0);
	static int count(0);
	cout << "No of elements " << endl;
	cin >> num;
	cout << "Enter sum of pairs " << endl;
	cin >> sum;
	int *arr = new int[num];
	cout << "Enter the elements " << endl;
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < num; i++)
	{
		cout << arr[i];
	}
	for (int i = 0; i < num; i++)
	{
		for (int j = i; j < num; j++)
		{
			if (sum == arr[i] + arr[j + 1])
				count++;
		}
	}

	cout << "The no of pairs are " << count << endl;

	return 0;
}

