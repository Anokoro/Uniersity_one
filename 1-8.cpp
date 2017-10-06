/*1552239 2班 岳昊玮*/
#include <iostream>
using namespace std;//缺少预处理指令和命名空间
int main()
{
		int a, b,c;//未定义变量c
		cin >> a >> b;//未初始化变量a,b
		c = a + b;
		cout << "a+b=" << a + b;//符号方向错误
		return 0://加上这个吧，正常结束。
}