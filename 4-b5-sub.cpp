/*1552239 º∆2 ‘¿ÍªÁ‚ */
#include<iostream>
using namespace std;
double fc0(double b, double c)
{
	double x;
	cout << "x=" << (x = -c / b) << endl;
	return 0;
}

double fc1(double a, double b, double c)
{
	double m, x1, x2;
	m = sqrt(b*b - 4 * a*c);
	x1 = (-b + m) / (2 * a);
	x2 = (-b - m) / (2 * a);
	cout << "x1=" << x1 << '\n' << "x2=" << x2 << endl;
	return 0;
}
double fc2(double a, double b, double c)
{
	double x;
	x = -b / (2 * a);
	cout << "x1=x2=" << x << endl;
	return 0;
}
double fc3(double a, double b, double c)
{
	double x, n, y;
	n = sqrt(4 * a*c - b*b);
	x = -b / (2 * a);
	y = sqrt(4 * a*c - b*b);
	cout << "x1=" << x << '+' << y << 'i' << '\n' << "x2=" << x << '-' << y << 'i' << '\n';
	return 0;
}