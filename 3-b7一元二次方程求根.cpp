/*1552239 2�� �����*/
#include<iostream>
using namespace std;
int main()
{
	float a, b, c, d;
	double x1, x2,x3;
	cin >> a >> b >> c;
	if (a == 0)
	cout << "����һԪ���η��̡�" << endl;
	else 
	    d = b*b - 4 * a*c;
	    x1 = ((-b) + sqrt(d)) / (a * 2);
		x2 = fabs((-b) - sqrt(d)) / (a * 2);
	    if(d>0)
			cout << "����������ȵ�ʵ��\nx1=" << x1 <<'\n'<< "x2=" << x2 << endl;
		if (d==0)
			cout << "��������ȵ�ʵ��\nx1=" << x1 <<'\n'<< "x2=" << x2<<endl;
		if (d < 0)
		{
			x1 = (-b) / (2 * a);
			x2 = (-b) / (2 * a);
			x3 = sqrt(-d) / (2 * a) ;
			cout << d;
			cout << "����������ȵ����\nx1=" << x1 << '+' << x3 << 'i' << '\n' << "x2=" << x2 << '-' << x3 << 'i' << endl;
		}
	return 0;
}