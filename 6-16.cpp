
/*1552239 ���� �����*/
#include<iostream>
using namespace std;
void judge(char *q)
{
	int num[100] = {0}, i = 0;
	while (*q != '\n')
	{
		while (*q <= '9'&&*q >= '0')
		{
			i++;
			break;
		}

		while (*q <= '9'&&*q >= '0')
		{
			*(num + i) = *(num + i) * 10 + *q - 48;
			q++;
		}
		if (*q == '\n')
			break;
		q++;
	}
	cout << "����ַ����й���" << i << "������" << endl<<"�ֱ��ǣ�";
	
		for (i = 1; *(num + i) != 0;i++)
			cout << *(num+i) << "  ";
}
int main()
{
	char str[100] , *p = str;
	cout << "������һ���ַ���" << endl;
	while (1)
	{
		*p++ = getchar();
		if (*(p - 1) == '\n')
			break;
	}
	judge(str);
	cout << endl;
	return 0;
}