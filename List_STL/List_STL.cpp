// List_STL.cpp 

#include <iostream>
#include <algorithm>
#include<list>
using namespace std;

void showList(list<int> ll)
{
	list<int>::iterator it;
	for (it = ll.begin(); it != ll.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;
}

int main()
{
	list<int> list1, list2;

	for (int i = 0; i < 10; i++)
	{
		list1.push_back(i * 2);
		list2.push_front(i * 3);
	}
	cout << "Elements List1" << endl;
	showList(list1);
	cout << "Elements List2" << endl;
	showList(list2);
	cout << "List1 pop front" << endl;
	list1.pop_front();
	showList(list1);
	cout << "List2 pop back" << endl;
	list2.pop_back();
	showList(list2);
	cout << "Reverse List1" << endl;
	list1.reverse();
	showList(list1);

}
