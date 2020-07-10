// MaxSumSubarrayOfSizeK.cpp 

#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int t(0), n(0), k(0);
	cin >> t;

	while (t--)
	{
		cin >> n >> k;

		int *arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		int wSum = 0, maxSum = 0;
		for (int i = 0; i < k; i++)
		{
			wSum += arr[i];
		}
		maxSum = max(maxSum, wSum);

		for (int i = k; i < n; i++)
		{
			wSum += arr[i] - arr[i - k];
			maxSum = max(maxSum, wSum);
		}

		cout << maxSum << endl;
		delete[]arr;
	}
	return 0;
}

