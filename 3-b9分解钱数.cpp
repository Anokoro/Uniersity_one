/*1552239 2�� �����*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float m;
	int a, b, c, d, e, f, g, h,i,j,sum;
	cin >> m;
	if (m < 0.0099|| m>100)
		cout << "����������������롣" << endl;
	else
	a = int( m / 50);
	b = int((m - a * 50) / 20);
	c = int((m - a * 50 - b * 20) / 10);
	d = int((m - a * 50 - b * 20 - c * 10) / 5);
	e = int((m - a * 50 - b * 20 - c * 10 - d * 5) / 1);
	f = int((m - a * 50 - b * 20 - c * 10 - d * 5 - e * 1) / 0.5);
	g = int((m - a * 50 - b * 20 - c * 10 - d * 5 - e * 1 - f*0.5) / 0.1);
	h = int((m - a * 50 - b * 20 - c * 10 - d * 5 - e * 1 - f*0.5 - g*0.1) / 0.05);
	i = int((m - a * 50 - b * 20 - c * 10 - d * 5 - e * 1 - f*0.5 - g*0.1 - h*0.05) / 0.0199);
	j = int((m - a * 50 - b * 20 - c * 10 - d * 5 - e * 1 - f*0.5 - g*0.1 - h*0.05 - i*0.02) / 0.0099);
	cout << "������Ϊ��"<<(sum = a + b + c + d + e + f+g + h + i + j) << endl;
	if (a != 0)
		cout << "50Ԫ*" << a << endl;
	if(b!=0)
	    cout << "20Ԫ*" << b << endl;
	if(c!=0)
	    cout << "10Ԫ*" << c << endl;
	if (d != 0)
	    cout << "5Ԫ*"  << d << endl;
	if (e != 0)
	    cout << "1Ԫ*"  << e << endl;
	if (f != 0)
	    cout << "5��*"  << f << endl;
	if (g != 0)
	    cout << "1��*"  << g << endl;
	if (h != 0)
	    cout << "5��*"  << h << endl;
	if (i != 0)
	    cout << "2��*"  << i << endl;
	if (j != 0)
	    cout << "1��*"  << j << endl;
	return 0;
}

