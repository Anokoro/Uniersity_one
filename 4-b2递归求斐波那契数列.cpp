/*1552239 ��2 ����� */
#include <iostream>
using namespace std;
int Fibonacci(int n);
int main()
{
	int n,i;
	cout << "������һ��1-40��������";
	cin >> n;
	if (n <= 0 || n > 40)
		cout << "����������������롣";
	else
		cout << "��" << n << "���쳲��������е�ֵΪ��" << Fibonacci(n) << endl;
	return 0;
}
int Fibonacci(int n)
{
	return n > 2 ? Fibonacci(n - 1) + Fibonacci(n - 2) : 1;
}