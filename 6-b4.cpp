
/*1552239 二班 岳昊玮*/
#include<iostream>
using namespace std;
void judge(char *p,char *q,int num)
{
	if (num == 1)
		cout << "yes" << endl;
	else
	{
		p = p - 2;       //通过p-2将p指向字符串的最后一个字符
		cout << *p << " " << *q << endl;
		while (*p-- == *q++&&num-- >= 0)
			;
		if (num == 0)
			cout << "yes" << endl;
		else
			cout << "no" << endl;

	}
}
int main()
{
	char str[100] = {0}, *p = str, num, *q = str;
	cout << "请输入一个字符串:" << endl;
	for (num = 0; num < 100; num++)
	{
		*p++ = getchar();
		if (*(p-1) == '\n')
			break;
	}                    //p指向的是第num号元素回车之后的一个元素，q指向的第0号元素
	judge(p,q,num);
	return 0;
}