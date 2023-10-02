#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double a;
	double y;
	double b;

	cout << "x = "; cin >> x;

	a = (x * x) + sin((x * 4) / 3);

	// 1 спосіб - галуження у скороченій формі

	if (x < -5)
		b = sin(x)/cos(x);
	if (x > -5 && x <= 0)
		b = 4 - ((x*x)/2);
	if (x > 0)
		b = log(x*x)-((4*x)/3);

	y = a + b;

	cout << endl;
	cout << "1) y = " << y << endl;

	// 2 спосіб - галуження у повній формі

	if (x < -5)
		b = sin(x) / cos(x);
	else
		if (x > 0)
			b = log(x * x) - ((4 * x) / 3);
		else
			b = 4 - ((x * x) / 2);
	y = a + b;

	cout << "2) y = " << y << endl;

	cin.get();
	return 0;
}