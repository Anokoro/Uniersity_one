/* 155223 ��2 �����*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	const  double pi = 3.14;
	double r,h, C, S, S1, V, V1;
	r = 1.5;
	h = 3;
	C = pi * 2 * r;
	S = pi*r*r;
	S1 = 4*pi*r*r;
	V = pi*r*r*r * 4 / 3;
	V1 = pi*r*r*h;
	cout << setiosflags(ios::fixed) << setprecision(2)<<endl;
	cout << "Բ���ܳ�Ϊ��" << C<<endl << "Բ�����Ϊ��" << S << endl << "��ı����Ϊ��" << S1 << endl
		 << "������Ϊ��" << V << endl << "Բ�������Ϊ��" << V1 << endl;
	return 0;
}