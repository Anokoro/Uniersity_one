/* 155223 计2 岳昊玮*/
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
	cout << "圆的周长为：" << C<<endl << "圆的面积为：" << S << endl << "球的表面积为：" << S1 << endl
		 << "球的体积为：" << V << endl << "圆柱的体积为：" << V1 << endl;
	return 0;
}