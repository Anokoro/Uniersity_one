/*1552239 2班 岳昊玮 */
#include <iostream>
#include<iomanip>
#include<fstream>//文件操作需要的头文件
using namespace std;
int main()
{
	int stu, i, j, k, grade[1001], t;
	ifstream fin;//fin为变量名
	fin.open("score.dat", ios::in);//打开文件
	if (!fin.is_open()) 
	{
		cout << "打开文件失败" << endl;
		return -1;

	}
	else
	{
		cout << "请输入学生的成绩:";
		for (stu = 1; stu <= 1000; stu++)
			fin >> grade[stu];
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
			cout << setw(4) << grade[k] << "      ";
			if (grade[k] == grade[k - 1])
				order[k] = order[k - 1];
			cout << setw(4) << order[k] << endl;;
		}
		fin.close();//关闭文件
	}
	return 0;
}