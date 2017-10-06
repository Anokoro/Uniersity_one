/*1552239 计2 岳昊玮 */
#include <iostream>
#include<iomanip>
#include<windows.h>
using namespace std;
int guocheng(int x);
void hanoi(int n, char a, char b, char c);
void gotoxy(HANDLE hout, const int X, const int Y);
int yi[10], er[10], san[10], i;
int main()
{

	int n;
	char chushi, jieshu, zhongjian;
	cout << "请输入初始塔的层数（1-10）：";
	cin >> n;
	for (; n < 0 || n>10;)
	{
		cin.clear();
		cin.ignore(1024, '\n');
		cout << "输入不合法，请重新输入。\n" << "请输入初始塔的层数（1-10）：" << endl;
		cin >> n;
	}
	cin.clear();
	cin.ignore(1024, '\n');
	cout << "请输入起始圆柱名（A-C）：";
	cin >> chushi;
	for (; chushi != 'A' && chushi != 'B' && chushi != 'C' && chushi != 'a' && chushi != 'b' && chushi != 'c';)
	{
		cin.clear();
		cin.ignore(1024, '\n');
		cout << "输入不合法，请重新输入。\n" << "请输入起始圆柱名(A-C)：";
		cin >> chushi;
	}
	if (chushi == 'a' || chushi == 'b' || chushi == 'c')
		chushi -= 32;
	cout << "请输入结束圆柱名（A-C）：";
	cin.clear();
	cin.ignore(1024, '\n');
	cin >> jieshu;
	for (; jieshu != 'A' && jieshu != 'B' && jieshu != 'C' && jieshu != 'a' && jieshu != 'b' && jieshu != 'c' || (jieshu == chushi || jieshu == chushi + 32 || jieshu == chushi - 32);)
	{
		cin.clear();
		cin.ignore(1024, '\n');
		cout << "输入不合法，请重新输入。\n" << "请输入结束圆柱名（A-C）：";
		cin >> jieshu;
	}
	if (jieshu == 'a' || jieshu == 'b' || jieshu == 'c')
		jieshu -= 32;
	zhongjian = 'A' + 'B' + 'C' - chushi - jieshu;

	for (i = 0; i < n; i++)
		yi[i] = n - i;

	cout << "初始:                   " << " A:";
	if (chushi == 'A' || chushi == 'a')
		for (i = 0; i < n; i++)
			cout << setw(2) << yi[i];

	cout << " B:";
	if (chushi == 'B' || chushi == 'b')
		for (i = 0; i < n; i++)
			cout << setw(2) << yi[i];

	cout << " C:" << endl;
	if (chushi == 'C' || chushi == 'c')
		for (i = 0; i < n; i++)
			cout << setw(2) << yi[i];

	cout << endl;
	hanoi(n, chushi, zhongjian, jieshu);
	return 0;
}


void hanoi(int n, char a, char b, char c)
{
	static int steps = 1;
	int m = n;
	HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE); //取标准输出设备对应的句柄
	if (n == 1)
	{

		cout << "第" << setw(3) << steps << "  步 <" << n << "> :" << a << " ----> " << c;
		if (a == 'a' || a == 'A')
		{
			for (i = 9; yi[i] == 0;)
				i--;
			yi[i] = 0;
			if (c == 'b' || c == 'B')
				for (i = 0; i<10; i++)
				{
					if (er[i] == 0) {
						er[i] = n;
						break;
					}
				}
			else if (c == 'c' || c == 'C')
				for (i = 0; i<10; i++)

				{
					if (san[i] == 0) {
						san[i] = n;
						break;
					}
				}
		}
		else if (a == 'b' || a == 'B')
		{
			for (i = 9; er[i] == 0;)
				i--;
			er[i] = 0;
			if (c == 'A' || c == 'a')
				for (i = 0; i<10; i++)
				{
					if (yi[i] == 0) {
						yi[i] = n;
						break;
					}
				}
			else if (c == 'c' || c == 'C')
				for (i = 0; i<10; i++)
				{
					if (san[i] == 0) {
						san[i] = n;
						break;
					}
				}
		}
		else if (a == 'c' || a == 'C')
		{
			for (i = 9; san[i] == 0;)
				i--;
			san[i] = 0;
			if (c == 'b' || c == 'B')
				for (i = 0; i<10; i++)
				{
					if (er[i] == 0) {
						er[i] = n;
						break;
					}
				}
			else if (c == 'a' || c == 'A')
				for (i = 0; i<10; i++)
				{
					if (yi[i] == 0) {
						yi[i] = n;
						break;
					}
				}
		}
		cout << "A:";
		for (i = 0, m = 15; yi[i] != 0; i++)
		{
			cout << setw(2) << yi[i];
			m--;
		}
		cout << "B:";
		for (i = 0, m = 15; er[i] != 0; i++)
		{
			cout << setw(2) << er[i];
			m--;
		}
		cout << "C:";
		for (i = 0,m=15; san[i] != 0; i++)
		{
			cout << setw(2) << san[i];
			m--;
		}
		cout << endl;


		steps++;
	}
	else
	{
		hanoi(n - 1, a, c, b);
		cout << "第" << setw(3) << steps << "  步 <" << n << "> :" << a << " ----> " << c;
		if (a == 'a' || a == 'A')
		{
			for (i = 9; yi[i] == 0;)
				i--;
			yi[i] = 0;
			if (c == 'b' || c == 'B')
				for (i = 0; i<10; i++)
				{
					if (er[i] == 0) {
						er[i] = n;
						break;
					}
				}
			else if (c == 'c' || c == 'C')
				for (i = 0; i<10; i++)
				{
					if (san[i] == 0) {
						san[i] = n;
						break;
					}
				}
		}
		if (a == 'b' || a == 'B')
		{
			for (i = 9; er[i] == 0;)
				i--;
			er[i] = 0;
			if (c == 'A' || c == 'a')
				for (i = 0; i<10; i++)
				{
					if (yi[i] == 0) {
						yi[i] = n;
						break;
					}
				}
			else if (c == 'c' || c == 'C')
				for (i = 0; i<10; i++)
				{
					if (san[i] == 0) {
						san[i] = n;
						break;

					}
				}
		}
		if (a == 'c' || a == 'C')
		{
			for (i = 9; san[i] == 0;)
				i--;
			san[i] = 0;
			if (c == 'b' || c == 'B')
				for (i = 0; i<10; i++)
				{
					if (er[i] == 0) {
						er[i] = n;
						break;
					}
				}
			else if (c == 'a' || c == 'A')
				for (i = 0; i<10; i++)
				{
					if (yi[i] == 0) {
						yi[i] = n;
						break;
					}
				}
		}
		cout << "A:";
		for (i = 0, m = 15; yi[i] != 0; i++)
		{
			cout << setw(2) << yi[i];
			m--;
		}
		cout << "B:";
		for (i = 0, m = 15; er[i] != 0; i++)
		{
			cout << setw(2) << er[i];
			m--;
		}
		cout << "C:";
		for (i = 0, m = 15; san[i] != 0; i++)
		{
			cout << setw(2) << san[i];
			m--;
		}
		cout << endl;
		steps++;
		hanoi(n - 1, b, a, c);
	}
}

/* 将光标移动到指定位置 */
void gotoxy(HANDLE hout, const int X, const int Y)
{
	COORD coord;
	coord.X = X;
	coord.Y = Y;
	SetConsoleCursorPosition(hout, coord);
}





//控制时间

/*

cout<<"请输入一个数字（0-5）：（0为没有延时，1的延时最长，5的延时最短）"
cin<<num;
for(;num<0||num>>5;)
{
cin.clear();
cin.ignore(1024,'\n');
cout<<"输入超范围，请重新输入：";
cin<<num;
}
switch()
{
case 0 ; 
sleep(0);
break;
case 1 :
sleep(1000);
break;
case 2:
sleep (500);
break;
case 3:
sleep(100);
break;
case 4:
sleep(50);
break;
case 5:
sleep (10);
break;
}
*/

