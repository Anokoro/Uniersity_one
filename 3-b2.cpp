/*1552239 ��2 ����� */
#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, f;
	cin >> a;

	cout << "��λ:" << (b = a / 10000) << endl;
	a = a - b * 10000;
	cout << "ǧλ:" << (c = a / 1000) << endl;
	a = a - c * 1000;
	cout << "��λ:" << (d = a / 100) << endl;
	a = a - d * 100;
	cout << "ʮλ:" << (e = a / 10) << endl;
	a = a - e * 10;
	cout << "��λ:" << (f = a) << endl;
	return 0;
}