// AreaOfATriangle.cpp 

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	int t(0);
	float a(0), b(0), c(0);
	float perimeter(0.0), area(0.0);
	cin >> t;

	while (t > 0)
	{
		cin >> a >> b >> c;
		int perimeter = a + b + c;

		area = perimeter * (perimeter - a) * (perimeter - b) * (perimeter - c);
		area = sqrt(area);

		if (area > 0)
		{
			cout << fixed << setprecision(6) << area << endl;
		}
		else
		{
			area = 0;
			cout << area << endl;
		}
		t--;

	}
    return 0;
}

