// CheckString.cpp 

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t(0);
	string str;
	cin >> t;
	
	while (t > 0)
	{
		cin >> str;

		if (str.length() == 1)
		{
			cout << "YES" << endl;
			break;
		}
		cout << endl;

		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == str[i + 1])
			{
				cout << "YES" << endl;
				break;
			}
			else
			{
				cout << "NO" << endl;
				break;
			}
		}
		t--;
	}
    return 0;
}


// Another solution 


//#include <iostream>
//#include<string>
//
//using namespace std;
//
//int main() {
//
//	int T, i;
//	int N;
//	string s;
//	cin >> T;
//	int count;
//
//	while (T--) {
//		count = 0;
//		cin >> s;
//		N = s.length();
//		//cout << N;
//		//cout << s[0];
//		for (i = 1; i < N; i++) {
//			if (s[0] == s[i])
//				count++;
//		}
//		if (count == (N - 1))
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//	}
//
//
//	return 0;
//}

