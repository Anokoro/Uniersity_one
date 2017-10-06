
/*1552239 二班 岳昊玮*/
#include<iostream>
#include<cmath>
using namespace std;

double fun_sin(double low, double high)
{
	int i;
	double sum = 0;
	for (i = 1; i<=1000; i++)
		sum += ((high - low) / 1000.0)*sin(low + i*(high - low) / 1000.0);
	return sum;
}
double fun_cos(double low, double high)
{
	int i;
	double sum = 0;
	for (i = 1; i<=1000; i++)
		sum += ((high - low) / 1000.0)*cos(low + i*(high - low) / 1000.0);
	return sum;
}
double fun_exp(double low, double high)
{
	int i;
	double sum = 0;
	for (i = 1; i <= 1000; i++)
		sum += ((high - low) / 1000.0)*exp(low + i*(high - low) / 1000.0);
	return sum;
}

double definite_intergration(double(*f)(double, double), double low, double high)
{
	return f(low, high);
}

int main()
{
	double low, high, value;
	cout << "请输入积分上下限" << endl;
	cin >> low >> high;//积分上下限
	value = double(definite_intergration(fun_sin, low, high));
	cout << "sinxdx=" << value << endl;

	cout << "请输入积分上下限" << endl;
	cin >> low >> high;//积分上下限
	value = double(definite_intergration(fun_cos, low, high));
	cout << "cosxdx=" << value << endl;

	cout << "请输入积分上下限" << endl;
	cin >> low >> high;//积分上下限
	value = double(definite_intergration(fun_exp, low, high));
	cout << "expdx=" << value << endl;

}