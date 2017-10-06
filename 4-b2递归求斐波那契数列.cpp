/*1552239 计2 岳昊玮 */
#include <iostream>
using namespace std;
int Fibonacci(int n);
int main()
{
	int n,i;
	cout << "请输入一个1-40的整数：";
	cin >> n;
	if (n <= 0 || n > 40)
		cout << "输入错误，请重新输入。";
	else
		cout << "第" << n << "项的斐波那契数列的值为：" << Fibonacci(n) << endl;
	return 0;
}
int Fibonacci(int n)
{
	return n > 2 ? Fibonacci(n - 1) + Fibonacci(n - 2) : 1;
}