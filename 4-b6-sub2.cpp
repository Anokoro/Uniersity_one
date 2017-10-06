
/*1552239 º∆2 ‘¿ÍªÁ‚ */
#include <iostream>
using namespace std; 
double fc1(double a, double b, double c)
{
	double m, x1, x2;
	m = sqrt(b*b - 4 * a*c);
	x1 = (-b + m) / (2 * a);
	x2 = (-b - m) / (2 * a);
	cout << "x1=" << x1 << '\n' << "x2=" << x2 << endl;
	return 0;
}
