#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int R[10][10], i, j, k,gong[10];
	ifstream fin;
	fin.open("shudu.txt", ios::in);
	if (!fin.is_open()) {
		cout << "���ļ�ʧ��" << endl;
		return -1;
	}
	for (i = 1; i <= 9; i++)
		for (j = 1; j <= 9; j++)
			fin >> R[i][j];
	fin.close();
	for (i = 1; i <= 9; i++)
		for (j = 1; j < 9; j++)
			for (k =j+ 1; k <= 9; k++)
			{
				if (R[i][j] == R[i][k])
				{
					cout << "�þ����������Ľ⡣" << endl;
					return 0;
				}
				else
					continue;
			}
	for (i = 1; i <= 9; i++)
		for (j = 1; j < 9; j++)
			for (k = j + 1; k <= 9; k++)
			{
				if (R[j][i] == R[k][i])
				{
					cout << "�þ����������Ľ⡣" << endl;
					return 0;
				}
				else
					continue;
			}
	for (i = 1; i <= 9; i++)
		for (j = 1; j <= 9; j++)
			R[i][j] = 0;
	for (i = 1; i <= 3; i++)
		for (j = 1; j <= 3; j++)
			gong[R[i][j]] = 1;

	cout << "�þ����������Ľ⡣" << endl;
	return 0;
}