
/*1552239 二班 岳昊玮*/
#include<iostream>
using namespace std;

int main()
{
	char str[64];    
	int n = 0, w = 1,number = 0;   
	cout << "请输入二进制值（最大32位）" << endl;     // 输入
	cin >> str;

	// 获取长度，去除非法数
	char* p = str;
	while (*p >= '0' && *p++ <= '1') 
		n++; 							 
	while (n--)        // 转换2进制到10进制
	{
		number += (*(str+n) - '0')*w;
		w *= 2;
	}
	// 输出
	cout << "对应的十进制值：" << endl;
	cout << number << endl;
	return number;
}