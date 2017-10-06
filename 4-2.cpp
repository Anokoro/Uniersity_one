/*1552239 计2 岳昊玮 */
#include <iostream>
#include <cmath>
using namespace std;
double fc0(double b ,double c);
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
double fc0(double b, double c)
{
	double x;
	cout<<"x="<<(x = -c / b)<<endl;
	return 0; 
}

double fc1(double a, double b, double c)
{
	double m,x1,x2;
	m = sqrt(b*b - 4 * a*c);
	x1 = (-b + m) / (2 * a);
	x2 = (-b - m) / (2 * a);
	cout << "x1=" << x1<<'\n' << "x2=" << x2<<endl;
	return 0;
}
double fc2(double a,double b,double c)
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