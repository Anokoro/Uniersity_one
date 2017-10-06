/*1552239 计2 岳昊玮*/
#include <iostream>
using namespace std;
int main()
{
	int i, j, m, n;
	i = 8;
	j = 10;
	m = ++i + j++;
	n = (++i) + (++j) + m;
	cout << i << '\t' << j << '\t' << m << '\t' << n << endl;
	return 0;
}/*这道题嘛，用到了运算符和结合性，先对i ,j初始化，再通过一系列运算给m,n赋值，最后输出定义的4个变量的值 */