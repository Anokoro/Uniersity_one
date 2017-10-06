/*1552239 计2 岳昊玮 */
#include <iostream>
using namespace std;
void hanoi(int n,char a,char b,char c);
int main()
{
	int n;
	cout << "请输入初始塔的层数n：";
	cin >> n;
	if (n < 0 || n>64)
		cout << "输入错误，请重新输入。" << endl;
	else
	hanoi( n, 'A', 'B', 'C');
	return 0;
}
void hanoi(int n, char a, char b, char c)
{
	if (n == 1)
		cout << n <<"  号盘子  " << a << " ----> " << c << endl;
	else
	{
		hanoi(n - 1, a, c,b);
		cout  << n  << "  号盘子  " << a << " ----> " << c << endl;
		hanoi(n - 1, b, a, c);
	}
}