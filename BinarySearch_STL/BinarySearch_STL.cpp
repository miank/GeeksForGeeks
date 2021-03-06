// BinarySearch_STL.cpp 

#include "pch.h"
#include <iostream>
#include <algorithm>
using namespace std;

void show(int a[], int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		cout << a[i] << endl;
	}
}

int main()
{
	int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	int asize = sizeof(a) / sizeof(a[0]);
	cout << "\n The array is : ";
	show(a, asize);

	cout << "Let's say we want to search for 2 in the array" << endl;
	cout << "So, we first sort the array" << endl;
	sort(a, a + asize);
	cout << "The array after sorting is : " << endl;
	show(a, asize);
	cout << "Now, we do the binary search" << endl;
	if (binary_search(a, a + 10, 2))
		cout << "Element found in the array" << endl;
	else
		cout << "Element not found in the array" << endl;

	cout << "Now, say we want to search for 10" << endl;
	if (binary_search(a, a + 10, 10))
		cout << "Element found in the array" << endl;
	else
		cout << "Element not found in the array" << endl;
}
