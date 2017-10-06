/*1552239 º∆2 ‘¿ÍªÁ‚ */
#include <iostream>
using namespace std;
double fc3(double a, double b, double c)
{
	double x, n, y;
	n = sqrt(4 * a*c - b*b);
	x = -b / (2 * a);
	y = sqrt(4 * a*c - b*b);
	cout << "x1=" << x << '+' << y << 'i' << '\n' << "x2=" << x << '-' << y << 'i' << '\n';
	return 0;
}