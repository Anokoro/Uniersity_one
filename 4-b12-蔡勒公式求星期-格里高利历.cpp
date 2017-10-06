/*1552239 2班 岳昊玮*/
#include<iostream>
#include<cmath>
using namespace std;
int zeller(int year, int month, int day);
int main()
{
	int year, month, day;
	cout << "请输入年、月、日：";
	cin >> year >> month >> day;
	if (month > 12 || month <= 0 || day <= 0 || day > 31)
		cout << "输入错误，请重新输入。" << endl;
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day == 31))
		cout << "输入错误，请重新输入。" << endl;

	else if (!(!(year % 4) && (year % 100) || !(year % 400)))/*a是平年*/
	{
		if ((month == 2) && (day >= 29))
			cout << "输入错误，请重新输入。" << endl;
		else
		{
			cout << "今天是星期";
			zeller(year, month, day);
			cout << endl;
		}
	}
	if (!(year % 4) && (year % 100) || !(year % 400))/*如果a为闰年*/
	{
		if ((month == 2) && (day >= 30))
			cout << "输入错误，请重新输入。" << endl;
		else
		{
			cout << "今天是星期";
			zeller(year, month, day);
			cout << endl;
		}
	}
	return 0;
}

int zeller (int year, int month, int day)
{
	int week, century,a,b,c;
	
	if (month == 1 || month == 2)
	{
		year -= 1;
		month += 12;
		
	}
	century = year / 100;
	year = year % 100;
	a = year / 4;
	b = century / 4;
	c = 13 * (month + 1) / 5;
	week = year + a + b - 2 * century + c + day - 1;
	for (; week < 0;)
		week += 7;
	for (; week >= 7;)
		week -= 7;
	switch (week)
	{
	case 0:
		cout << "日";
		break;
	case 1:
		cout << "一";
		break;
	case 2:
		cout << "二";
		break;
	case 3:
		cout << "三";
		break;
	case 4:
		cout << "四";
		break;
	case 5:
		cout << "五";
		break;
	case 6:
		cout << "六";
		break;
	}
	
	return 0;
}