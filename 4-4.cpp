/*1552239 ��2 ����� */
#include <iostream>
using namespace std;
int fac();
int main()
{
	int sum=0,a=1, b=1, c=1;
	cout << "������a,b,c��";
	a = fac();
	b = fac();
	c = fac();
	sum = a + b + c;
	if (sum < 2147483648&&sum>0)
		cout << "a!+b!+c!=" << sum << endl;
	else
		cout << "�����������������롣" << endl;
	return 0;
}
 int fac()
{
	int n, x,y=1;
	cin >> x;
	for (n = 1; n <= x; n++)
		y = y*n;
	return y;
}