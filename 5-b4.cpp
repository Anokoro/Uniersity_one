/*1552239 2班 岳昊玮 */
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int stu, i, j, k;
	double grade[100], t;
	cout << "请输入学生的成绩:";
	for (stu = 1; stu <= 50; stu++)
		cin >> grade[stu];
	cout << endl;
	for (i = 1; i <= 50; i++)//反冒泡
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

	cout << "分数       " << "排名" << endl;
	for (k = 1; k <= 50; k++)
	{
		int order[51];
		order[k] = k;
		cout << setw(4)<<grade[k]<<"      ";
		if (grade[k] == grade[k - 1])
			order[k] = order[k - 1];
		cout <<setw(4)<< order[k] << endl;;
	}
	return 0;
}