/*1552239 2班 岳昊玮*/
#include<iostream>
using namespace std;
int main()
{
	int a;
	double n,b,c,d,e,f,k,l,m,y,o,x;
	cin >> a;
	b = 1e5*0.1;
	k = a - 1e5;
	c = 1e5*0.075;
	l = a - 2e5;
	d = 2e5*0.05;
	m = a - 4e5;
	e = 2e5*0.03;
	y = a - 6e5;
	f = 4e5*0.015;
	o = a - 1e6;
	n = int (a / 1e5);
	switch (int(n))
	{
	case 0:cout << "应发奖金总数为：" << (a*0.1) << endl;
		break;
	case 1:cout << "应发奖金总数为：" << (x = b + k*0.075) << endl;
		break;
	case 2:
	case 3:cout << "应发奖金总数为：" << (x = b + c + l*0.05) << endl;
		break;
	case 4:
	case 5:cout << "应发奖金总数为：" << (x = b + c + d + m*0.03) << endl;
		break;
	case 6:
	case 7:
	case 8:
	case 9:cout << "应发奖金总数为：" << (x = b + c + d + e + y*0.015) << endl;
		break;
	default:cout << "应发奖金总数为：" << (x = b + c + d + e + +f + o*0.01)<< endl;
		break;
	}
	return 0;
}


