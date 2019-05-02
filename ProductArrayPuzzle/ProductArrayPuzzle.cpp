// ProductArrayPuzzle.cpp 

#include <iostream>
using namespace std;

int main()
{
	int t(0);
	cin >> t;

	while (t--)
	{
		int n(0);
		cin >> n;
		int result(1);
		int* arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++)
		{			
			result = result * arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			cout << result / arr[i] << " ";
		}
		cout << endl;
		delete[] arr;
	}
}
