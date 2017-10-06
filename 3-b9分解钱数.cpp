/*1552239 2班 岳昊玮*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float m;
	int a, b, c, d, e, f, g, h,i,j,sum;
	cin >> m;
	if (m < 0.0099|| m>100)
		cout << "输入错误，请重新输入。" << endl;
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
	cout << "总数量为："<<(sum = a + b + c + d + e + f+g + h + i + j) << endl;
	if (a != 0)
		cout << "50元*" << a << endl;
	if(b!=0)
	    cout << "20元*" << b << endl;
	if(c!=0)
	    cout << "10元*" << c << endl;
	if (d != 0)
	    cout << "5元*"  << d << endl;
	if (e != 0)
	    cout << "1元*"  << e << endl;
	if (f != 0)
	    cout << "5角*"  << f << endl;
	if (g != 0)
	    cout << "1角*"  << g << endl;
	if (h != 0)
	    cout << "5分*"  << h << endl;
	if (i != 0)
	    cout << "2分*"  << i << endl;
	if (j != 0)
	    cout << "1分*"  << j << endl;
	return 0;
}

