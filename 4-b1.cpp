/*1552239 ��2 ����� */
#include <iostream>
#include <cmath>
using namespace std;
int fac(int x);
int main()
{
	int n;
	cout << "����������������";
	cin >> n;
	cout << "ת��Ϊ�ַ�����Ľ��Ϊ:";
	
	fac(fabs(n));
	if (n < 0)
		cout << "- ";
	cout << endl;
	return 0;
}
int fac(int x)
{
	int a;
	a = x % 10;
	if (a >= 0 && x != 0)
		cout << a << ' ';
	else
		return 0;
	x = (x - a) / 10;
	fac(x);
	return 0;

}