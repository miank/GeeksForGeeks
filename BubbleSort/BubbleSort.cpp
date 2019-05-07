// BubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "Bubble Sort " << endl;

	int n(0);
	cin >> n;
	int  *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	int temp(0);
	bool swapped;

	for (int i = 0; i < n - 1; i++)
	{
		swapped = false;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swapped = true;
			}
		}
		// If no two elements were swapped by inner loop then break
		// It means array is sorted.
		if (swapped == false)
			break;
	}
	cout << "After sorting " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
