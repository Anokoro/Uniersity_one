
/*1552239 ���� �����*/
#include<iostream>
using namespace std;
void judge(char *p,char *q,int num)
{
	if (num == 1)
		cout << "yes" << endl;
	else
	{
		p = p - 2;       //ͨ��p-2��pָ���ַ��������һ���ַ�
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
	cout << "������һ���ַ���:" << endl;
	for (num = 0; num < 100; num++)
	{
		*p++ = getchar();
		if (*(p-1) == '\n')
			break;
	}                    //pָ����ǵ�num��Ԫ�ػس�֮���һ��Ԫ�أ�qָ��ĵ�0��Ԫ��
	judge(p,q,num);
	return 0;
}