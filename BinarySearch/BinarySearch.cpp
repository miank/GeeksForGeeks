// BinarySearch.cpp 

#include "pch.h"
#include<iostream>
using namespace std;
int bin_search(int A[], int left, int right, int k);
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int N;
		cin >> N;
		int *arr = new int[N];
		for (int i = 0; i < N; i++)
			cin >> arr[i];
		int key;
		cin >> key;
		int found = bin_search(arr, 0, N - 1, key);
		cout << found << endl;
	}
}

/*You need to complete this function */
int bin_search(int A[], int left, int right, int k)
{
	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (k == A[mid])
		{
			return mid;
		}
		else
			if (k < A[mid])
				right = mid - 1;
			else
				left = mid + 1;
	}
	return -1;
}