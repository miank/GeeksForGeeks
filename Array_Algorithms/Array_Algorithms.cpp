// Array_Algorithms.cpp 

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[6] = { 1, 2, 3, 4, 5,-6 };
	
	// all_of()
	all_of(arr, arr + 6, [](int x) {return x > 0;  }) ?
		cout << "All elements are postive" :
		cout << "All are not postive elements";

	// any_of Check for negative element
	any_of(arr, arr + 6, [](int x) {return x > 0;  }) ?
		cout << "There exist a negative element" :
		cout << "All are not postive elements";


}

