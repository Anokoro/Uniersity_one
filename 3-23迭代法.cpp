/*1552239 º∆2 ‘¿ÍªÁ‚ */
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,x, x1=1;
	int n=1;
	cin >> a;
	x = sqrt(a);
	for (; fabs(x1 - x) > 1e-5; n++)
	{
		x1 = 1.0 / 2 * (x + a / x);
		x = x1;
	}cout << x << endl;
	return 0;
}