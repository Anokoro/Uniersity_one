/*1552239 ��2 ����� */
#include <iostream>
using namespace std;
int min(int a, int b);
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
			cout << "2�����е���СֵΪ��" << min(a, b) << endl;;
		}
		if (n == 3)
		{
			int a, b, c;
			cin >> a >> b >> c;
			cout << "3�����е���СֵΪ��" << min(a, min(b, c)) << endl;;
		}
		if (n == 4)
		{
			int a, b, c, d;
			cin >> a >> b >> c >> d;
			cout << "4�����е���СֵΪ��" << min(a, min(b, min(c, d))) << endl;
		}
	}
	return 0;
}
int min(int a,int b)
{
	return a > b ? b : a;
}