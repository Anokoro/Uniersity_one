/*1552239 2�� �����*/
#include<iostream>
using namespace std;
int main()
{
	int a;
	double b, c, d, e, f, k, l, m, n, o, x;
	cout << "����������" << endl;
	cin >> a;
	b = 1e5*0.1;
	k = a - 1e5;
	c = 1e5*0.075;
	l = a - 2e5;
	d = 2e5*0.05;
	m = a - 4e5;
	e = 2e5*0.03;
	n = a - 6e5;
	f = 4e5*0.015;
	o = a - 1e6;
	if (a < 0)
		cout << "����������������룺" << endl;
	if ((a>+0)&(a < 1e5))
		cout << "Ӧ������Ϊ:" << (x = a*0.1) << endl;
	if ((a>1e5)&(a <= 2e5))
		cout << "Ӧ������Ϊ:" << (x = b + k*0.075) << endl;
	if ((a>2e5)&(a <= 4e5))
		cout << "Ӧ������Ϊ:" << (x = b + c + l*0.05) << endl;
	if ((a>4e5)&(a <= 6e5))
		cout << "Ӧ������Ϊ:" << (x = b + c + d + m*0.03) << endl;
	if ((a>6e5)&(a <= 1e6))
		cout << "Ӧ������Ϊ:" << (x = b + c + d + e + n*0.015) << endl;
	if (a > 1e6)
		cout << "Ӧ������Ϊ:" << (x = b + c + d + e + f + o*0.01) << endl;

	return 0;
}
