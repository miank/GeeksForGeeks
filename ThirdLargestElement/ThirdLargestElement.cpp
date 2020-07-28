// ThirdLargestElement.cpp 

#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int thirdLargest(int a[], int n)
{
	//Your code here
	if (n < 3)
	{
		return -1;
	}
	sort(a, a + n);

	int ele = a[n - 3];
	return ele;
}


int main()
{
	int t(0), n(0);
	cin >> t >> n;

	while (t--)
	{
		int *arr = new int[n];

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
	
		cout << thirdLargest(arr, n) << endl;
	}
	return 0;
}
