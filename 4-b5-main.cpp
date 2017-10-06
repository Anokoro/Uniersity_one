/*1552239 计2 岳昊玮 */
#include <iostream>
#include <cmath>
using namespace std;
double fc0(double b, double c);
double fc1(double a, double b, double c);
double fc2(double a, double b, double c);
double fc3(double a, double b, double c);
int main()
{
	double a, b, c, m;
	cin >> a >> b >> c;
	m = b*b - 4 * a*c;
	if (a == 0)
	{
		if (b == 0)
			cout << "输入错误，请重新输入。" << endl;
		else
			fc0(b, c);
	}
	else
	{
		if (m > 0)
			fc1(a, b, c);
		if (m == 0)
			fc2(a, b, c);
		if (m < 0)
			fc3(a, b, c);
	}
	return 0;
}