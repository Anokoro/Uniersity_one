/*1552239 �ƶ� �����*/
#include <iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	static int sum_a = 0, sum_A = 0, sum_void = 0, sum_num = 0, sum_else = 0, sum = 0;
	int i, j;
	cout << "������3���ַ���ÿ������80�����Իس��������У�" << endl;

	for (i = 0; i <= 2; i++)
	{
		cout << "�������" << (i + 1) << "���ַ�" << endl;
		for (j = 0;j <= 79; j++)
		{
			ch = getchar();

			if (ch <= 'z'&&ch >= 'a')
				sum_a++;
			else if (ch <= 'Z'&&ch >= 'A')
				sum_A++;
			else if (ch == ' ')
				sum_void++;
			else if (ch <= '9'&&ch >= '0')
				sum_num++;
			else if (ch == '\n')
				break;
			else
				sum_else++;
			sum++;
		}
		
		cin.clear();
		cin.ignore(1024, '\n');
	}
	cout << "����" << sum << "���ַ�������\n��д��ĸ��" << sum_A
		<< "��\nСд��ĸ��" << sum_a
		<< "��\n���֣�" << sum_num
		<< "��\n�ո�" << sum_void
		<< "��\n�����ַ���" << sum_else << "��\n";
	return 0;;
}
