/*1552239 计2 岳昊玮 */
#include <iostream>
using namespace std;
int main()
{
	int year, month, day, week;
	cout << "请输入年份(2000-2030)和月份(1-12) :";
	cin >> year >> month;
	if (year > 2030 || year < 2000 || month > 12 || month < 1)
		cout << "输入错误请重新输入。" << endl;
	else
	{
		cout << endl;
		cout << "请输入" << year << "年" << month << "月1日的星期(0-6表示星期日-星期六) :";
		cin >> week;
		if (week > 6 || week < 0)
			cout << "输入错误请重新输入。" << endl;
		else
		{
			cout << endl;
			cout << year << "年" << month << "月的月历为：" << endl;
			cout << "星期一" << " " << "星期二" << " " << "星期三" << " " << "星期四" << " " << "星期五" << " " << "星期六" << " " << "星期日" << endl;

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
		cout << endl;
	}
	return 0;
}