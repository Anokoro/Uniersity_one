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
	if (n < 0)
		cout << "- ";
	fac(fabs(n));

	cout << endl;
	return 0;
}
int fac(int x)
{
	int a;
	a = x % 10;
	x = (x - a) / 10;
	if (a >= 0 && x != 0)
		fac(x);
	cout << a << ' ';
	return 0;

}