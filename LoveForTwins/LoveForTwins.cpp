// LoveForTwins.cpp 

#include "pch.h"
#include <iostream>
#include <map>
#include <string>
using namespace std;

//int main()
//{
//	int t(0);
//	cin >> t;
//	map<int, int> m1;
//
//	while (t--)
//	{
//		int n(0);
//		cin >> n;
//
//		int *arr = new int[n];
//		for (int i = 0; i < n; i++)
//		{
//			cin >> arr[i];
//			m1[arr[i]]++;
//		}
//
//		int pairSum = 0;
//		for (auto i = m1.begin (); i != m1.end(); i++)
//		{
//				pairSum += i->second / 2;
//		}
//		cout << pairSum * 2 << endl;
//	}
//}
#include<iostream>
#include <map>
using namespace std;
int main()
{
	//code
	int t;
	cin >> t;
	while (t--)
	{
		int n, count = 0;
		cin >> n;

		map <int, int> m;
		int temp;
		for (int i = 0; i < n; i++)
		{

			cin >> temp;
			m[temp]++;
		}

		for (auto it : m)
		{
			count += it.second / 2;
		}
		cout << count * 2 << endl;
	}
	return 0;
}