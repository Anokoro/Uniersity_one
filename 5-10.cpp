/*1552239 计二 岳昊玮*/
#include <iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	static int sum_a = 0, sum_A = 0, sum_void = 0, sum_num = 0, sum_else = 0, sum = 0;
	int i, j;
	cout << "请输入3行字符，每行至多80个，以回车结束本行：" << endl;

	for (i = 0; i <= 2; i++)
	{
		cout << "请输入第" << (i + 1) << "行字符" << endl;
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
	cout << "共有" << sum << "个字符，其中\n大写字母：" << sum_A
		<< "个\n小写字母：" << sum_a
		<< "个\n数字：" << sum_num
		<< "个\n空格：" << sum_void
		<< "个\n其他字符：" << sum_else << "个\n";
	return 0;;
}
