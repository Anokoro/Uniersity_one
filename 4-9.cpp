/*1552239 ��2 ����� */
#include <iostream>
using namespace std;
void hanoi(int n,char a,char b,char c);
int main()
{
	int n;
	cout << "�������ʼ���Ĳ���n��";
	cin >> n;
	if (n < 0 || n>64)
		cout << "����������������롣" << endl;
	else
	hanoi( n, 'A', 'B', 'C');
	return 0;
}
void hanoi(int n, char a, char b, char c)
{
	if (n == 1)
		cout << n <<"  ������  " << a << " ----> " << c << endl;
	else
	{
		hanoi(n - 1, a, c,b);
		cout  << n  << "  ������  " << a << " ----> " << c << endl;
		hanoi(n - 1, b, a, c);
	}
}