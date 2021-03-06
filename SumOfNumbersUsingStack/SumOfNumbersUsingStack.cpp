// SumOfNumbersUsingStack.cpp 

#include "stdafx.h"
#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> st;
	int sum = 0;
	st.push(1);
	st.push(8);
	st.push(3);
	st.push(6);
	st.push(2);

	while (!st.empty())
	{
		sum = sum + st.top();
		st.pop();
	}
	cout << sum << endl;
    return 0;
}

