// IndexOfAnExtraElement.cpp 

#include "pch.h"
#include <iostream>
#include <numeric>
#include <string>
#include <algorithm>
using namespace std;

/*Complete the function below*/
int findExtra(int a[], int b[], int n) {
	// add code here.
	int sum1 = 0, sum2 = 0;
	sum1 = accumulate(a, a + n, sum1);
	sum2 = accumulate(b, b + n - 1, sum2);
	int extraElementPosition = -1;

	int diff = sum1 - sum2;
	int i = 0;
	bool flag = false;
	while (i < n)
	{
		if (a[i] == diff)
		{
			extraElementPosition = i;
			flag = true;
			return extraElementPosition;
		}
		i++;
	}
	if (false)
		return extraElementPosition;
}

int main()
{
	int n(0);
	cin >> n;
	int *arr1 = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}
	int *arr2 = new int[n];
	for (int i = 0; i < n - 1; i++)
	{
		cin >> arr2[i];
	}

	int extraElementPosition = findExtra(arr1, arr2, n);
	cout << extraElementPosition << endl;
	return 0;
}