/*1552239 计2 岳昊玮 */
#include <iostream>
using namespace std;
int min(int a, int b);
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
			cout << "2个数中的最小值为：" << min(a, b) << endl;;
		}
		if (n == 3)
		{
			int a, b, c;
			cin >> a >> b >> c;
			cout << "3个数中的最小值为：" << min(a, min(b, c)) << endl;;
		}
		if (n == 4)
		{
			int a, b, c, d;
			cin >> a >> b >> c >> d;
			cout << "4个数中的最小值为：" << min(a, min(b, min(c, d))) << endl;
		}
	}
	return 0;
}
int min(int a,int b)
{
	return a > b ? b : a;
}