// ArrangingTheArray.cpp

#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int t(0);
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		int* arr = new int[n];

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		queue<int> q;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] < 0)
			{
				cout << arr[i] << " ";
			}
			else
			{
				q.push(arr[i]);
			}
		}
		while (!q.empty())
		{
			cout << q.front() << " ";
			q.pop();
		}
		cout << endl;
	}
}
