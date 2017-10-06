/*1552239 计2 岳昊玮 */
#include <iostream>
int max(int a, int b);
int max(int a, int b, int c);
int max(int a, int b, int c, int d);
using namespace std;
int main()
{
	int n;
	cout << "请输入正整数的个数(2、3或4个)，并输入各自的值：";
	cin >> n;
	if (n != 2 && n != 3 && n != 4)
		cout << "输入错误，请重新输入。" << endl;
	else
	{
		if (n == 2)
		{
			int a, b;
			cin >> a >> b;
			cout << "2个数中的最大值为：" << max(a, b) << endl;;
		}
		if (n == 3)
		{
			int a, b, c;
			cin >> a >> b >> c;
			cout << "3个数中的最大值为：" << max(a, b, c) << endl;;
		}
		if (n == 4)
		{
			int a, b, c, d;
			cin >> a >> b >> c >> d;
			cout << "4个数中的最大值为：" << max(a, b, c, d) << endl;
		}
	}
	return 0;
}
int max(int a, int b)
{
		return a > b ? a : b;
}
int max(int a, int b, int c)
{
	return  max(a, max(b, c));
}
int max(int a, int b, int c,int d)
{
	return max(a, max(b, max(c, d)));
}