// StackInSTL.cpp 

#include "stdafx.h"
#include <iostream>
#include <stack>
using namespace std;

void showStack(stack<int> st)
{
	stack<int> s1 = st;
	while (!s1.empty())
	{
		cout << s1.top() << " ";
		s1.pop();
	}
	cout << endl;
}

int main()
{
	stack<int> st;
	st.push(10);
	st.push(20);
	st.push(5);
	st.push(1);
	cout << "The Stack contents are " << endl;
	showStack(st);
	cout << "Stack size " << st.size() << endl;
	cout << "Stack top " << st.top() << endl;

	cout << "Stack Pop " << endl;
	st.pop();
	showStack(st);
    return 0;
}

