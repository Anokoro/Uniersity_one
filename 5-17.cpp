/*1552239 2�� ����� */
#include <iostream>
#include<cstdio>
#include<iomanip>
using namespace std;

int main()
{
	int n,num=1, grades[11],student_num[11];
	char student_Name[11][100];
	cout<< "�����������ѧ����������ѧ��(1001-1010)���ɼ�(0-100)" << endl;
	for (n = 1; n <= 10; n++)
	{
		cout << "�����������"<<n<<"��ѧ����������ѧ�š��ɼ�" << endl;
		cin >> student_Name[n];
		cin >> student_num[n];
		cin >> grades[n];
		if (grades[n] < 0 || grades[n]>100 
			|| student_num[n] > 1010 || student_num[n] < 1001)
		{
			cout << "��������밴��Ҫ������." << endl;
			n--;
		}
		cin.clear();
		cin.ignore(1024, '\n');
	}
	cout << "��ʮ�����в��������Ϊ��" << endl;
	for (n = 1; n <= 10;n++)
		if (grades[n] < 60)
		{
			cout << setw(10) << student_Name[n]<<" ";
			cout << setw(6)  << student_num[n];
			cout << setw(6)  << grades[n];
			cout << endl;
			
		}
	return 0;
}
