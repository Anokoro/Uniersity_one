/*1552239 2班 岳昊玮 */
#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
	cout << "请输入一个正整数：";
	int a[11] = {1,2,3,4,5,6,7,8,9,10},t,i;
	
	cin >> a[10];
	cout << "插入后的结果为："<<endl;
	for (i = 10; a[i] <= a[i-1];i--)
	{
		t = a[i-1];
		a[i-1] = a[i];
		a[i] = t;
	}
	for (i = 0; i < 11; i++)
		cout << "a["<<i<<"]="<<a[i] << endl;
	return 0;
}