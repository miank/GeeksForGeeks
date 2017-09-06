// GenerateBinaryNumbers.cpp 

#include "stdafx.h"
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

void reverse(queue<int> &q)
{
	if (q.empty())
		return;
	int num = q.front();
	q.pop();
	reverse(q);
	q.push(num);
}

int main()
{
	int t(0), num(0), q(1), rem(0), temp(0);
	string str;
	queue<int> queue;

	cin >> t;

	while (t > 0)
	{
		cin >> num;

		for (int i = 1; i <= num; i++)
		{
			temp = i;

			while (temp != 0)
			{
				q = temp / 2;
				rem = temp % 2;
				temp = q;
				queue.push(rem);
			}
			reverse(queue);
			while (!queue.empty())
			{
				cout << queue.front();
				queue.pop();
			}
			cout << " ";
		}
		queue.empty();
		t--;
		cout << endl;
	}
	return 0;
}

