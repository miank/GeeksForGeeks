// C++If_Else.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int t(0), ele(0);
	cin >> t;
	while (t > 0)
	{
		cin >> ele;
		if (ele > 5)
			cout << "Greater than 5" << endl;
		else if (ele < 5)
			cout << "Less than 5" << endl;
		else
			cout << "Equal to 5" << endl;
		t--;
	}
	return 0;
}
