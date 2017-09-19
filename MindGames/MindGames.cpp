// MindGames.cpp : Defines the entry point for the console application.
//

#include<iostream>
using namespace std;
int  main() {
	int testcase = 0, evenk = 0;
	cin >> testcase;
	for (int i = 1; i <= testcase; i++)
	{
		cin >> evenk;

		cout << evenk / 2 << "\n";
	}
	//code
	return 0;
}

