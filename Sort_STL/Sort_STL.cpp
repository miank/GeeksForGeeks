// Sort_STL.cpp - Sorting via STL

#include "pch.h"
#include <algorithm>
#include <iostream>
using namespace std;

void show(int a[])
{
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
}
int main()
{
	int a[10] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	cout << "The array before sorting is : " << endl;
	show(a);
	sort(a, a + 10);
	cout << "The array after sorting is : " << endl;
	show(a);
	// sorting in descending order
	cout << "Sorting the function in descending order" << endl;
	sort(a, a + 10, greater<int>());
	show(a);
}