// DecimalToBinary.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t(0), num(0), rem(0), i(0), quo(0);
	int *arr;
	vector<int> ivec;
	cin >> t;

	while (t > 0)
	{
		cin >> num;
		while (num > 0)
		{
			arr = new int[i];
			rem = num % 2;
			quo = num / 2;
			num = quo;
			ivec.push_back(rem);
		}
		std::reverse(ivec.begin(), ivec.end());
		for (vector<int>::iterator i = ivec.begin(); i != ivec.end(); i++)
		{
			cout << *i;
		}
		ivec.clear();
		cout << endl;
		t--;
	}	
	return 0;
}

