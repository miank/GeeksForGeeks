// Vector_cbegin_cend.cpp 

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int>  vec;
	vec.push_back(2);
	vec.push_back(4);
	vec.push_back(6);
	vec.push_back(8);
	vec.push_back(10);
	vec.push_back(12);

	// Displaying contents 
	cout << "Contents of the vector elements " << endl;
	for (auto it = vec.cbegin(); it != vec.end(); it++)
	{
		cout << *it << endl;
 	}

	cout << "Contents of the vector elements " << endl;
	for (auto it = vec.cend() - 1; it >= vec.begin(); 
		--it)
	{
		cout << *it << endl;
	}
}
