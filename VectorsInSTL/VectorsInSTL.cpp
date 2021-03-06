// VectorsInSTL.cpp 

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v1;
	for (int i = 1; i <= 5; i++)
	{
		v1.push_back(i);
	}
	cout << "Output of begin and end" << endl;
	for (auto i = v1.begin(); i != v1.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	cout << "Output of cbegin and cend" << endl;
	for (auto i = v1.cbegin(); i != v1.cend(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	cout << "\nOutput of rbegin and rend: ";
	for (auto ir = v1.rbegin(); ir != v1.rend(); ++ir)
		cout << *ir << " ";

	cout << "\nOutput of crbegin and crend : ";
	for (auto ir = v1.crbegin(); ir != v1.crend(); ++ir)
		cout << *ir << " ";
	cout << endl;
	cout << "Size of vector " << v1.size() << endl;
	cout << "Capacity of vector " << v1.capacity() << endl;
	cout << "Max Size of vector " << v1.max_size() << endl;

	if (v1.empty())
		cout << "Vector is not empty " << endl;
	else 
		cout << "Vector is empty " << endl;

	cout << "Front " << v1.front() << endl;
	cout << "Back " << v1.back() << endl;



}

