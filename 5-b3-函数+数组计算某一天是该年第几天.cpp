/*1552239 2班 岳昊玮*/
#include<iostream>
using namespace std;
int tian(int year, int month, int day);
int main()
{
	int year, month, day;
	cout << "请输入年月日：";
	cin >> year >> month >> day;
	if (month > 12|| month <= 0 || day <= 0 || day>31)
		cout << "输入错误，请重新输入。" << endl;
	else if ((month == 4 || month || month == 6 || month || month == 9 || month == 11) && (day == 31))
		cout << "输入错误，请重新输入。" << endl;
	else
		cout<<"该天是今年第" << tian(year, month, day) << "天" << endl;
	return 0;
}
int tian(int year, int month, int day)
{
	int tianshu=0, i;
	if (!(!(year % 4) && (year % 100) || !(year % 400)))//平年
	{
		int num[13] = { 0,31 ,28,31 ,30, 31,30,31,31,30,31,30,31 , };
		for (i = 1; i < month; i++)
			tianshu += num[i];
	}
	if (!(year % 4) && (year % 100) || !(year % 400))//闰年
	{
		int num[13] = { 0,31 ,29,31 ,30, 31,30,31,31,30,31,30,31 , };
		for (i = 1; i < month; i++)
			tianshu += num[i];
	}
	return tianshu+day;
}
