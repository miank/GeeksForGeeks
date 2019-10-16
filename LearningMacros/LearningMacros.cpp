// LearningMacros.cpp 

#include <iostream>

#define MULTI(a,b) (a*b) //The multiplication macro function.
/*Whenever MULTI(a,b) is encountered, it is replaced by (a*b) during the preprocessing stage*/
using namespace std;
void macros(int a, int b);
//Position this line where user code will be pasted.
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int a, b;
		cin >> a >> b; //Input a and b
		macros(a, b);
	}
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
void macros(int c, int d)
{
	//See the macro defined at the top of the code. Use that macro to find a*b
	//Use only macro to complete this task
	cout << MULTI(c, d);
	cout << endl;
}
