// Print1ToNWithoutUsingLoops.cpp 

#include "pch.h"
#include <iostream>
using namespace std;

// Another approach 
void func(int x, int n) {
	if (x == n) {
		cout << endl;
		return;
	}
	cout << x << " ";
	func(x + 1, n);
}

void fun(int n)
{
	if (n > 0)
	{
		cout << n << " ";
		n--;
		fun(n);
	}
	else
	{
		return;
	}
}
int main()
{
	int t(0);
	cin >> t;

	while (t--)
	{
		int n = 0;
		cin >> n;
		fun(n);
		cout << endl;
	}
	return 0;
}
