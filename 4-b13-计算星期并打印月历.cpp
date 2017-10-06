/*1552239 2班 岳昊玮*/
#include<iostream>
#include<cmath>
using namespace std;
int zeller(int year, int month);
void calender(int week, int year, int month);
int main()
{
	int year, month;
	cout << "请输入年份(1900-2100)和月份(1-12) :";

	cin >> year >> month;
	for (; year > 2100 || year < 1900 || month > 12 || month < 1;)
	{
		cout << "输入错误,请重新输入。" << endl;
		cin >> year >> month;
	}
		cout << year << "年" << month << "月的月历为：" << endl;
		cout << "星期一" << " " << "星期二" << " " << "星期三" << " " << "星期四" << " " << "星期五" << " " << "星期六" << " " << "星期日" << endl;
		zeller(year, month);
	
	return 0;
}

int zeller(int year, int month)
{
	int week, century,day=1, a, b, c;
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
	if (month == 13 || month == 14)
	{
		year =year+1+century*100;
		month -= 12;
	}
	calender(week,year,month);
	return 0;
}

void calender(int week, int year,int month)
{
	int day;
	switch (week)
	{
	case 0:cout << "                                          ";
		break;
	case 1:cout << "  ";
		break;
	case 2:cout << "       ";
		break;
	case 3:cout << "              ";
		break;
	case 4:cout << "                     ";
		break;
	case 5:cout << "                            ";
		break;
	case 6:cout << "                                   ";
		break;
	}
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		for (day = 1; day < 32; day++)
		{
			if (day < 10)
				cout << ' ';
			if ((week + day - 1) % 7 == 0)
				cout << "  " << day << "   \n";
			else
				cout << "  " << day << "   ";
		}
	}
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		for (day = 1; day < 31; day++)
		{
			if (day < 10)
				cout << ' ';
			if ((week + day - 1) % 7 == 0)
				cout << "  " << day << "   \n";
			else
				cout << "  " << day << "   ";
		}

	}
	while (month == 2)
	{
		if ((year % 4 == 0 && year % 100 != 0) || ((year % 400) == 0))
		{
			for (day = 1; day <= 29; day++)
			{
				if (day < 10)
					cout << ' ';
				if ((week + day - 1) % 7 == 0)
					cout << "  " << day << "   \n";
				else
					cout << "  " << day << "   ";

			}
			break;
		}
		else
		{
			for (day = 1; day <= 28; day++)
			{
				if (day < 10)
					cout << ' ';
				if ((week + day - 1) % 7 == 0)
					cout << "  " << day << "   \n";
				else
					cout << "  " << day << "   ";

			}
			break;
		}
	}
}









