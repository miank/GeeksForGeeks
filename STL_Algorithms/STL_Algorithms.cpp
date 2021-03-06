// STL_Algorithms.cpp : STL Algorithms

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
	int arr[] = { 10, 20, 5, 23, 42, 15 };
	int n = sizeof(arr) / sizeof(arr[0]);

	vector<int> v(arr, arr + n);
	cout << "Vector elements are " << endl;
	for (int i = 0; i < n; i++)
		cout << v[i] << " ";
	
	cout << endl;
	sort(v.begin(), v.end());
	cout << "Vector after sorting " << endl;
	for (int i = 0; i < n; i++)
		cout << v[i] << " ";
	cout << endl;

	// reversing the vector
	reverse(v.begin(), v.end());
	cout << "Vector after reversing " << endl;
	for (int i = 0; i < n; i++)
		cout << v[i] << " ";
	cout << endl;

	// Max element in vector
	cout << "Max element in vector " << endl;
	cout << *max_element(v.begin(), v.end());
	cout << endl;
	
	// Min element in vector
	cout << "Min element in vector " << endl;
	cout << *min_element(v.begin(), v.end());
	cout << endl;

	// accumulation of vector
	cout << "Accumulation of vector " << endl;
	cout << accumulate(v.begin(), v.end(), 0);
	cout << endl;

	// count the occurence of an element in vector
	cout << "Count of an element in a vector " << endl;
	cout << count(v.begin(), v.end(), 5);
	cout << endl;

	// Find() returns the iterator to the last element
	cout << "Finding the element in the vector " << endl;
	find(v.begin(), v.end(), 5) != v.end()? cout << "Element found." : cout << "Element not found";
	cout << endl;

	// Binary Search
	cout << "Binary Search " << endl;
	if (binary_search(v.begin(), v.end(), 20))
		cout << "Element found" << endl;
	else
		cout << "Element not found" << endl;




}