// BinarySorting.cpp 

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> SortBinaryArray(vector<int> binArray);

//User function template for C++

// binArray is an array that consists only 0s and 1s
// return sorted binary array 
vector<int> SortBinaryArray(vector<int> binArray)
{
	// Your code goes here
	int size = binArray.size();
	int type0 = 0;
	int type1 = size - 1;

	while (type0 < type1)
	{
		if (binArray[type0] == 1)
		{
			swap(binArray[type0], binArray[type1]);
			type1--;
		}
		else
			type0++;
	}

	return binArray;
}

int main() {
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		vector<int> binArray(n);

		for (int i = 0; i < n; i++)
			cin >> binArray[i];

		vector<int> result = SortBinaryArray(binArray);
		for (int i = 0; i < n; i++)
			cout << result[i] << " ";

		cout << endl;
	}
	return 0;
}


