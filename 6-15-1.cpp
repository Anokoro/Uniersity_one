#include<iostream>
void ave_En(int *p);
void out(int *p,char *q,int *a );
void great(int *p, char *q);
using namespace std;
int main()        //��Ӣ������������̡߳��ƿƵ�
{
	char name[10] = "���ұ���",*q=name;
	int scores[4][5] = { {86,89,90,89,91},{100,89,88,95,84},{66,88,77,49,59} ,{49,59,100,56,88} }, *p=scores[0];
	int student_num[4] = {2001,2002,2003,2004},*a=student_num;
	ave_En(p);
	out(p, q, a);
	great(p, q);
	return 0;
}
void ave_En(int *p)
{
	int i,sum=0;
	for (i = 0;i<4; i++)
		sum += *(p + i);
	cout << "4��ͬѧ��Ӣ��ƽ���ɼ�Ϊ��" << sum / 4.0 << endl;
}
void out(int *p,char *q,int *a)
{
	int i,j,num=0,sum;
	for (i = 0; i < 4; i++)
	{
		sum = 0;
		num = 0;
		for (j = 0; j < 5; j++)
		{
			sum += *(p+5*i+j);
			if (*(p+5*i+j) < 60)
				num++;
		}
		if (num > 2)
		{
			cout << "ѧ��"<< *(q + 2 * i ) << *(q + 2 * i +1)<< "��"<<num<<"�Ų���������ѧ�ż���Ӣ������������̡߳��ƿƵ���5��ƽ���ֱַ�Ϊ" << endl;
			cout << *(a + i)<<' ';
			for (j = 0; j < 5; j++)
				cout << *(p+5*i+j) << ' ';
			cout << sum/5.0 << endl;
		}
	}
}
void great(int *p,char *q)
{
	int i,j,sum,num;
	for (i = 0; i < 4; i++)
	{
		sum = 0;
		num = 0;
		for (j = 0; j < 5; j++)
		{
			sum += *(p + 5 * i + j);
			if (*(p + 5 * i + j)>85)
				num++;
		}
		if (sum / 5.0 >= 90)
			cout << "ѧ��" << *(q + 2 * i) << *(q + 2 * i + 1) << "��5��ƽ���ɼ���90������,Ϊ" <<sum/5.0<< endl;
		if (num == 5)
			cout << "ѧ��" << *(q + 2 * i) << *(q + 2 * i + 1) << "��5�ƾ���85������" << endl;
	}

}
