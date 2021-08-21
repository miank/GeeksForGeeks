// WeightOfString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int StringWeight(string str)
{
	int len = str.length();
	int sum(0);
	int count(0);
	for (int i = 0; i < len; i++)
	{
		char ch = str[i];

		switch (ch)
		{
		case 'a': count = 1;
			sum += count;
			break;
		case 'b': count = 2;
			sum += count;
			break;
		case 'c': count = 3;
			sum += count;
			break;
		case 'd': count = 4;
			sum += count;
			break;
		case 'e': count = 5;
			sum += count;
			break;
		case 'f': count = 6;
			sum += count;
			break;
		case 'g': count = 7;
			sum += count;
			break;
		case 'h': count = 8;
			sum += count;
			break;
		case 'i': count = 9;
			sum += count;
			break;
		case 'j': count = 10;
			sum += count;
			break;
		case 'k': count = 11;
			sum += count;
			break;
		case 'l': count = 12;
			sum += count;
			break;
		case 'm': count = 13;
			sum += count;
			break;
		case 'n': count = 14;
			sum += count;
			break;
		case 'o': count = 15;
			sum += count;
			//break;
		case 'p': count = 16;
			sum += count;
			break;
		case 'q': count = 17;
			sum += count;
			break;
		case 'r': count = 18;
			sum += count;
			break;
		case 's': count = 19;
			sum += count;
			break;
		case 't': count = 20;
			sum += count;
			break;
		case 'u': count = 21;
			sum += count;
			break;
		case 'v': count = 22;
			sum += count;
			break;
		case 'w': count = 23;
			sum += count;
			break;
		case 'x': count = 24;
			sum += count;
			break;
		case 'y': count = 25;
			sum += count;
			break;
		case 'z': count = 26;
			sum += count;
			break;
		default:
			break;
		}
	}
	return sum;
}

int main()
{
	int t(0);
	cin >> t;
	while (t--)
	{
		string str1, str2;
		cin >> str1 >> str2;
		int sum1 = StringWeight(str1);
		int sum2 = StringWeight(str2);
		if (sum1 > sum2)
		{
			cout << 1 << endl;
		}
		else if (sum1 < sum2)
		{
			cout << 2 << endl;
		}
		else
		{
			cout << "equal" << endl;
		}
	}
}


