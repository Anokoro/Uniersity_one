#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int bianshu, i, a=1,j,l, k[30], x, y, zb[8][2], sum = 0, count[100], t[100],num=0;
	double S = 0;
	 int  m = 1;
	cout << "请输入多边形的边数（4-7）：";
	cin >> bianshu;
	for (; bianshu < 4 || bianshu>7;)   //输入边数，直至合法
	{
		cin.clear();
		cin.ignore(1024, '\n');
		cout << "输入不合法，请重新输入多边形的边数（4-7）：";
		cin >> bianshu;
	}
	for (i = 1; i < bianshu; i++)       //计算共可以有多少条连线
		sum += i;
	cout << "请输入" << bianshu << "边形各个点对应的坐标.\n";
	for (i = 1; i <= bianshu; i++)                        //输入点的坐标
	{
		cout << "请输入第" << i << "个点的坐标：";
		cin >> x >> y;
		zb[i][0] = x;
		zb[i][1] = y;
	}
	for (i = 1; i < bianshu; i++)               //求出任意两点的连线斜率并存储在k[]数组中，为后续比较提供
		for (j = i + 1; j <= bianshu; j++)
		{
			k[m] = (zb[i][1] - zb[j][1]) / (zb[i][0] - zb[j][0]);
			m++;
		}
	for (i = 1; i < sum; i++)//比较斜率并计数相等的次数
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
	for (i = 1; i < sum; i++)//判断是否为N边形
	{
		if (count[i] >= 3)
		{
			cout << "不是" << bianshu << "边形";
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
			for (i = 1; i <= bianshu; i++)       //如果是N边形，则接下来判断是否为凸多边形，原理为取一条两点连线，判断其他点是否在连线同侧

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
				cout << "由输入点的坐标所确定的图形为凹" << bianshu << "边形。" << endl;
				return 0;
			}
		
		}
	if (num !=2)
			{
				cout << "由输入点的坐标所确定的图形为凹" << bianshu << "边形。" << endl;
				return 0;
			}
	}
	
	 //满足这个条件 ，说明t全为正或全为负，所有点均在所确定的直系的同侧，下面即为求面积
	{
		for (i = 1; i < bianshu; i++);
		S += (1.0 / 2)*(zb[i][0] * zb[i + 1][1] - zb[i + 1][0] * zb[i][1]);
		cout << bianshu << "边形的面积为：" << setw(8)<<S << endl;
	}
	return 0;
}