/*1552239 ��2 �����   շת��������������������Լ��*/
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a, b,c,d,f;
	cout << "��������������a��b:";
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
	cout << "a��b�����Լ��Ϊ��" << b << endl;;
	cout << "a��b����С������Ϊ��" << (f = f / b) << endl;
	return 0;
}