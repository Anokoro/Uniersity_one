/*1552239 ��2 ����� */
#include <iostream>
using namespace std;
int main()
{
	int year, month, day, week;
	cout << "���������(2000-2030)���·�(1-12) :";
	cin >> year >> month;
	if (year > 2030 || year < 2000 || month > 12 || month < 1)
		cout << "����������������롣" << endl;
	else
	{
		cout << endl;
		cout << "������" << year << "��" << month << "��1�յ�����(0-6��ʾ������-������) :";
		cin >> week;
		if (week > 6 || week < 0)
			cout << "����������������롣" << endl;
		else
		{
			cout << endl;
			cout << year << "��" << month << "�µ�����Ϊ��" << endl;
			cout << "����һ" << " " << "���ڶ�" << " " << "������" << " " << "������" << " " << "������" << " " << "������" << " " << "������" << endl;

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