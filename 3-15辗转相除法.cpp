/*1552239 计2 岳昊玮   辗转相除法求两个整数的最大公约数*/
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a, b,c,d,f;
	cout << "请输入两个整数a和b:";
	cin >> a >> b;
	f = a*b;
	if (a < b)
	{
		d = a;
		a = b;
		b = d;
	}
	if ((c=a%b)!=0)
	{
		c = a%b;
		a = b;
		b = c;
	}
	cout << "a和b的最大公约数为：" << b << endl;;
	cout << "a和b的最小公倍数为：" << (f = f / b) << endl;
	return 0;
}