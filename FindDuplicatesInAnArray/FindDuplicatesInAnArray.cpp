// FindDuplicatesInAnArray.cpp 

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> duplicates(int a[], int n) 
{
	// code here
	vector<int> v;
	sort(a, a + n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == a[i + 1])
		{
			v.push_back(a[i]);
		}
	}
	if (v.size() == 0)
	{
		v.push_back(-1);
	}
	v.erase(std::unique(v.begin(), v.end()), v.end());
	return v;
}

int main()
{
	int n(0);
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	vector<int> v;
	v = duplicates(arr, n);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	return 0;
}
