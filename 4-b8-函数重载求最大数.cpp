/*1552239 ��2 ����� */
#include <iostream>
int max(int a, int b);
int max(int a, int b, int c);
int max(int a, int b, int c, int d);
using namespace std;
int main()
{
	int n;
	cout << "�������������ĸ���(2��3��4��)����������Ե�ֵ��";
	cin >> n;
	if (n != 2 && n != 3 && n != 4)
		cout << "����������������롣" << endl;
	else
	{
		if (n == 2)
		{
			int a, b;
			cin >> a >> b;
			cout << "2�����е����ֵΪ��" << max(a, b) << endl;;
		}
		if (n == 3)
		{
			int a, b, c;
			cin >> a >> b >> c;
			cout << "3�����е����ֵΪ��" << max(a, b, c) << endl;;
		}
		if (n == 4)
		{
			int a, b, c, d;
			cin >> a >> b >> c >> d;
			cout << "4�����е����ֵΪ��" << max(a, b, c, d) << endl;
		}
	}
	return 0;
}
int max(int a, int b)
{
		return a > b ? a : b;
}
int max(int a, int b, int c)
{
	return  max(a, max(b, c));
}
int max(int a, int b, int c,int d)
{
	return max(a, max(b, max(c, d)));
}