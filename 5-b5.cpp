/*1552239 2�� ����� */
#include <iostream>
#include<iomanip>
#include<fstream>//�ļ�������Ҫ��ͷ�ļ�
using namespace std;
int main()
{
	int stu, i, j, k, grade[1001], t;
	ifstream fin;//finΪ������
	fin.open("score.dat", ios::in);//���ļ�
	if (!fin.is_open()) 
	{
		cout << "���ļ�ʧ��" << endl;
		return -1;

	}
	else
	{
		cout << "������ѧ���ĳɼ�:";
		for (stu = 1; stu <= 1000; stu++)
			fin >> grade[stu];
		cout << endl;
		for (i = 1; i <= 50; i++)//��ð��
			for (j = 1; j <= 50 - i; j++)
			{
				if (grade[j] < grade[j + 1])
				{
					t = grade[j];
					grade[j] = grade[j + 1];
					grade[j + 1] = t;
				}
				else
					continue;
			}
		cout << "����       " << "����" << endl;
		for (k = 1; k <= 50; k++)
		{
			int order[51];
			order[k] = k;
			cout << setw(4) << grade[k] << "      ";
			if (grade[k] == grade[k - 1])
				order[k] = order[k - 1];
			cout << setw(4) << order[k] << endl;;
		}
		fin.close();//�ر��ļ�
	}
	return 0;
}