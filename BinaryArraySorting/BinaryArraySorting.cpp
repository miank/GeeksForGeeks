// BinaryArraySorting.cpp 

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int t(0), num(0), ele(0), n(0);
	cin >> t;
	vector<int> ivec;

	while (t > 0)
	{
		cin >> n;

		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			ivec.push_back(ele);
		}
		std::sort(ivec.begin(), ivec.end());
		for (int i = 0; i < n; i++)
		{
			cout << ivec[i] << " ";
		}
		cout << endl;
		ivec.clear();
		t--;
	}
	return 0;
}

