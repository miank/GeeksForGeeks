// GenerateBinaryNumbers.cpp 

#include "stdafx.h"
#include <iostream>
#include <queue>
using namespace std;

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

			while (!queue.empty())
			{
				cout << queue.front() << " ";
				queue.pop();
			}
			cout << endl;
		}		
		
		queue.empty();
		t--;
	}
    return 0;
}

