/*1552239 计二 岳昊玮*/
#include<iostream>
using namespace std;
int main()
{
	double x, y;
	cin >> x>> y;
	if (x == 0 || y == 0)
		cout << "塔的高度为：" << '0' << endl;
	else if((x+y<=3)&(x>0)&(y>0))
		cout << "塔的高度为：" << '1' << endl;
	else if((-x+y<=3)&(x<0)&(y>0))
		cout << "塔的高度为：" << '2' << endl;
	else if((x+y>=-3)&(x<0)&(y<0))
		cout << "塔的高度为：" << '3' << endl;
	else if((x-y>=3)&(x>0)&(y<0))
		cout << "塔的高度为：" << '4' << endl;
	else 
		cout << "塔的高度为：" << '0' << endl;
	return 0;
}


