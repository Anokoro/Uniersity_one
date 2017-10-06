/*1552239 2班 岳昊玮*/
#include<iostream>
using namespace std;
int main()
{
	char *Eg[12] = { "January","Februray","March","April","May","June",
		"July","August","September","October","Novemeber","December" };
	int month;
	cout << "请输入一个月份：" ;
	cin >> month;
	if (month < 1 || month>12)
	{
		cout << "invalid" << endl;
		return 0;
	}
	else
		cout << *(Eg + month - 1) << endl;
	return 0;
}