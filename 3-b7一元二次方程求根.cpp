/*1552239 2班 岳昊玮*/
#include<iostream>
using namespace std;
int main()
{
	float a, b, c, d;
	double x1, x2,x3;
	cin >> a >> b >> c;
	if (a == 0)
	cout << "不是一元二次方程。" << endl;
	else 
	    d = b*b - 4 * a*c;
	    x1 = ((-b) + sqrt(d)) / (a * 2);
		x2 = fabs((-b) - sqrt(d)) / (a * 2);
	    if(d>0)
			cout << "有两个不相等的实根\nx1=" << x1 <<'\n'<< "x2=" << x2 << endl;
		if (d==0)
			cout << "有两个相等的实根\nx1=" << x1 <<'\n'<< "x2=" << x2<<endl;
		if (d < 0)
		{
			x1 = (-b) / (2 * a);
			x2 = (-b) / (2 * a);
			x3 = sqrt(-d) / (2 * a) ;
			cout << d;
			cout << "有两个不相等的虚根\nx1=" << x1 << '+' << x3 << 'i' << '\n' << "x2=" << x2 << '-' << x3 << 'i' << endl;
		}
	return 0;
}