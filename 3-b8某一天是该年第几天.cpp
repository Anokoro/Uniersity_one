/*1552239 2班 岳昊玮*/
#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cout << "请输入年月日：";
	cin >> a >> b >> c;
	if (b > 12 || b <= 0 || c <= 0 || c>31)
		cout << "输入错误，请重新输入。" << endl;
	else if ((b == 4 || b == 6 || b == 9 || b == 11)&&(c == 31))
		cout << "输入错误，请重新输入。" << endl;
	else if (!(!(a % 4) && (a % 100 ) ||  !(a % 400)))/*a是平年*/
	{
		if((b == 2) &&(c >= 29))
		cout << "输入错误，请重新输入。" << endl;
		else
		{
			cout << "该天是今年第";
			switch (b)
			{
			case 1:
				cout << c ;
				break;
			case 2:
				cout << (d = 31 + c) ;
				break;
			case 3:
				cout << (d = 31 + 28 + c) ;
				break;
			case 4:
				cout << (d = 31 * 2 + 28 + c) ;
				break;
			case 5:
				cout << (d = 31 * 2 + 28 + 30 + c) ;
				break;
			case 6:
				cout << (d = 31 * 3 + 30 + 28 + c) ;
				break;
			case 7:
				cout << (d = 31 * 3 + 30 * 2 + 28 + c) ;
				break;
			case 8:
				cout << (d = 31 * 4 + 30 * 2 + 28 + c) ;
				break;
			case 9:
				cout << (d = 31 * 4 + 30 * 3 + 28 + c) ;
				break;
			case 10:
				cout << (d = 31 * 5 + 30 * 3 + 28 + c) ;
				break;
			case 11:
				cout << (d = 31 * 6 + 30 * 3 + 28 + c) ;
				break;
			case 12:
				cout << (d = 31 * 6 + 30 * 4 + 28 + c) ;
				break;
			}
			cout << "天。"<<endl;
		}
	}
	if (!(a % 4 )&&(a % 100) || !(a % 400))/*如果a为闰年*/
	{
		if ((b == 2) && (c >= 30))
			cout << "输入错误，请重新输入。" << endl;
		else
		{
			cout << "该天是今年第";
			switch (b)
			{
			case 1:
				cout << c ;
				break;
			case 2:
				cout << (d = 31 + c) ;
				break;
			case 3:
				cout << (d = 31 + 29 + c) ;
				break;
			case 4:
				cout << (d = 31 * 2 + 29 + c) ;
				break;
			case 5:
				cout << (d = 31 * 2 + 29 + 30 + c) ;
				break;
			case 6:
				cout << (d = 31 * 3 + 30 + 29 + c) ;
				break;
			case 7:
				cout << (d = 31 * 3 + 30 * 2 + 29 + c) ;
				break;
			case 8:
				cout << (d = 31 * 4 + 30 * 2 + 29 + c) ;
				break;
			case 9:
				cout << (d = 31 * 4 + 30 * 3 + 29 + c) ;
				break;
			case 10:
				cout << (d = 31 * 5 + 30 * 3 + 29 + c) ;
				break;
			case 11:
				cout << (d = 31 * 6 + 30 * 3 + 29 + c) ;
				break;
			case 12:
				cout << (d = 31 * 6 + 30 * 4 + 29 + c) ;
				break;
			}
			cout << "天。"<<endl;
		}
	}
	return 0;
}
