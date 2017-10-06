/*1552239 计2 岳昊玮 */
#include <iostream>
#include <cmath>
using namespace std;
int fac(int x);
int main()
{
	int n;
	cout << "请输入任意整数：";
	cin >> n;
	cout << "转变为字符串后的结果为:";
	
	fac(fabs(n));
	if (n < 0)
		cout << "- ";
	cout << endl;
	return 0;
}
int fac(int x)
{
	int a;
	a = x % 10;
	if (a >= 0 && x != 0)
		cout << a << ' ';
	else
		return 0;
	x = (x - a) / 10;
	fac(x);
	return 0;

}