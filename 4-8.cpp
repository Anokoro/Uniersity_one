/*1552239 ��2 ����� */
#include <iostream>
using namespace std;
double p(int n, double x);
int main()
{
	int n;
	double x;
	cout << "����������x��n��ֵ��" ;
	cin >> x>>n;
	if (n < 0)
		cout << "����������������롣" << endl;
	else
	cout << "pn(x)=" << p(n,x) << endl;
	return 0;
}
double p( int n,double x)
{
	double z;

	if (n == 0)
		return 1;
	if (n == 1)
		return x;
	if (n >= 2)
		return z = (((2 * n - 1)*x *p(n - 1, x) - (n - 1)*p(n - 2, x)) / n);
	else
		return 0;
}