#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int bianshu, i, a=1,j,l, k[30], x, y, zb[8][2], sum = 0, count[100], t[100],num=0;
	double S = 0;
	 int  m = 1;
	cout << "���������εı�����4-7����";
	cin >> bianshu;
	for (; bianshu < 4 || bianshu>7;)   //���������ֱ���Ϸ�
	{
		cin.clear();
		cin.ignore(1024, '\n');
		cout << "���벻�Ϸ����������������εı�����4-7����";
		cin >> bianshu;
	}
	for (i = 1; i < bianshu; i++)       //���㹲�����ж���������
		sum += i;
	cout << "������" << bianshu << "���θ������Ӧ������.\n";
	for (i = 1; i <= bianshu; i++)                        //����������
	{
		cout << "�������" << i << "��������꣺";
		cin >> x >> y;
		zb[i][0] = x;
		zb[i][1] = y;
	}
	for (i = 1; i < bianshu; i++)               //����������������б�ʲ��洢��k[]�����У�Ϊ�����Ƚ��ṩ
		for (j = i + 1; j <= bianshu; j++)
		{
			k[m] = (zb[i][1] - zb[j][1]) / (zb[i][0] - zb[j][0]);
			m++;
		}
	for (i = 1; i < sum; i++)//�Ƚ�б�ʲ�������ȵĴ���
	{
		count[i] = 0;
		for (j = 1; j < sum; j++)
		{
			if (k[j] == k[i])
				count[i]++;
			else
				continue;
		}
	}
	for (i = 1; i < sum; i++)//�ж��Ƿ�ΪN����
	{
		if (count[i] >= 3)
		{
			cout << "����" << bianshu << "����";
			return 0;
			
		}
		else
			continue;
	}
	
	
	for (j = 1; j <= bianshu; j++)
	{
		for (l = 1; l < bianshu; l++)
		{
			if (l == j)
				continue;
			for (i = 1; i <= bianshu; i++)       //�����N���Σ���������ж��Ƿ�Ϊ͹����Σ�ԭ��Ϊȡһ���������ߣ��ж��������Ƿ�������ͬ��

			{
				if (i == j || i == l)
					continue;
				t[a] = zb[i][0] * (zb[j][1] - zb[l][1]) + zb[i][1] * (zb[l][0] - zb[j][0]) - zb[l][0] * zb[j][1] + zb[j][0] * zb[l][1];
				a++;
			}
			for (i = 1; i < bianshu; i++)
				for (j = 2; j < bianshu - i; j++)
					if (t[i] > t[j])
					{
						m = t[i];
						t[i] = t[j];
						t[j] = m;
					}
			if (t[1] > 0 || t[bianshu] < 0)
				num++;
			else
			{
				cout << "��������������ȷ����ͼ��Ϊ��" << bianshu << "���Ρ�" << endl;
				return 0;
			}
		
		}
	if (num !=2)
			{
				cout << "��������������ȷ����ͼ��Ϊ��" << bianshu << "���Ρ�" << endl;
				return 0;
			}
	}
	
	 //����������� ��˵��tȫΪ����ȫΪ�������е������ȷ����ֱϵ��ͬ�࣬���漴Ϊ�����
	{
		for (i = 1; i < bianshu; i++);
		S += (1.0 / 2)*(zb[i][0] * zb[i + 1][1] - zb[i + 1][0] * zb[i][1]);
		cout << bianshu << "���ε����Ϊ��" << setw(8)<<S << endl;
	}
	return 0;
}