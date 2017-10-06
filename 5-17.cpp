/*1552239 2班 岳昊玮 */
#include <iostream>
#include<cstdio>
#include<iomanip>
using namespace std;

int main()
{
	int n,num=1, grades[11],student_num[11];
	char student_Name[11][100];
	cout<< "请依次输入个学生的姓名、学号(1001-1010)、成绩(0-100)" << endl;
	for (n = 1; n <= 10; n++)
	{
		cout << "请依次输入第"<<n<<"个学生的姓名、学号、成绩" << endl;
		cin >> student_Name[n];
		cin >> student_num[n];
		cin >> grades[n];
		if (grades[n] < 0 || grades[n]>100 
			|| student_num[n] > 1010 || student_num[n] < 1001)
		{
			cout << "输入错误，请按照要求输入." << endl;
			n--;
		}
		cin.clear();
		cin.ignore(1024, '\n');
	}
	cout << "这十个人中不及格的人为：" << endl;
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
