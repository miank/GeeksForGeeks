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

	// Stack Swap
	stack<int> stack1;
	stack<int> stack2;
	stack1.push(1);
	stack1.push(2);
	stack1.push(3);
	stack1.push(4);
	stack1.push(5);
	stack1.push(6);
	stack2.push(0);
	stack2.push(1);
	stack2.push(2);
	stack2.push(3);
	stack2.push(4);
	stack2.push(5);
	stack2.push(6);
	stack1.swap(stack2);

	cout << endl << "Stack1 = ";
	while (!stack1.empty()) {
		cout << stack1.top() << " ";
		stack1.pop();
	}

	cout << endl << "Stack2 = ";
	while (!stack2.empty()) {
		cout << stack2.top() << " ";
		stack2.pop();
	}

    return 0;
}

