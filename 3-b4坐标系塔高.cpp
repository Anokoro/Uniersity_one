/*1552239 �ƶ� �����*/
#include<iostream>
using namespace std;
int main()
{
	double x, y;
	cin >> x>> y;
	if (x == 0 || y == 0)
		cout << "���ĸ߶�Ϊ��" << '0' << endl;
	else if((x+y<=3)&(x>0)&(y>0))
		cout << "���ĸ߶�Ϊ��" << '1' << endl;
	else if((-x+y<=3)&(x<0)&(y>0))
		cout << "���ĸ߶�Ϊ��" << '2' << endl;
	else if((x+y>=-3)&(x<0)&(y<0))
		cout << "���ĸ߶�Ϊ��" << '3' << endl;
	else if((x-y>=3)&(x>0)&(y<0))
		cout << "���ĸ߶�Ϊ��" << '4' << endl;
	else 
		cout << "���ĸ߶�Ϊ��" << '0' << endl;
	return 0;
}


