/*1552239 计二 岳昊玮*/
#include<iostream>
using namespace std;
int main()
{
	int i, x, y, map[10][26] = { 0 }, counter, m, n;
	for (counter = 0; counter <= 50; )//生成随机位置并赋值为‘*’
	{
		x = rand() % 10;
		y = rand() % 26;
		if (map[x][y] == 0)
		{
			map[x][y] = '*';
			counter++;
		}
	}

	for (counter = 0, x = 0; x < 9; x++)
	{
		for (y = 0; y < 25; y++)
			if (map[x][y] == 0)
			{
				if (x > 0 && y> 0 && x < 9 && y < 25)//中间部分
				{
					for (x = x - 1, m = 0; m < 3; x++)
					{
						for (y = y - 1, n = 0; n < 3; y++)
						{
							if (map[x][y] == '*')
							{
								counter++;

							}
							n++;
						}
						m++;
					}

					map[x - 1][y - 1] = counter;
				}
				if (x == 0 && y == 0)//左上角
				{
					for (counter = 0; x < 2; x++)
						for (; y < 2; y++)
							if (map[x][y] == '*')
								counter++;
					map[0][0] = counter;
				}
				if (x == 0 && y == 25)//右上角
				{
					for (counter = 0; x < 2; x++)
						for (; y >= 24 && y <= 25; y--)
							if (map[x][y] == '*')
								counter++;
					map[0][25] = counter;
				}
				if (x == 9 && y == 0)//左下角
				{
					for (counter = 0; x <= 9 && x >= 8; x--)
						for (; y < 2; y++)
							if (map[x][y] == '*')
								counter++;
					map[9][0] = counter;
				}
				if (x == 9 && y == 25)//右下角
				{
					for (counter = 0; x <= 9 && x >= 8; x--)
						for (; y <= 25 && y >= 24; y--)
							if (map[x][y] == '*')
								counter++;
					map[0][0] = counter;
				}
				if (x == 0 && y != 0 && y != 25)//上边一行除去上边两角
				{
					for (counter = 0; x < 2; x++)
						for (y -= 1, i = 0; i < 3; y++)
						{
							if (map[x][y] == '*')
								counter++;
							i++;
						}
					map[x - 1][y - 1] = counter;
				}
				if (x == 9 && y != 0 && y != 25)//下边一行除去下边两角
				{
					for (counter = 0; x <= 9 && x >= 8; x--)
						for (y -= 1, i = 0; i < 3; y++)
						{
							if (map[x][y] == '*')
								counter++;
							i++;
						}
					map[x][y - 1] = counter;
				}
				if (y == 0 && x != 0 && x != 9)//左边一列除去左边两角
				{
					for (counter = 0, x -= 1, i = 0; i < 3; x++)
					{
						for (y = 0; y < 2; y++)
						{
							if (map[x][y] == '*')
								counter++;
						}
						i++;
					}
					map[x - 1][y - 1] = counter;
				}
				if (y == 25 && x != 0 && x != 9)//右边一列除去右边两角
				{
					for (counter = 0, i = 0, x -= 1; i < 3; x++)
					{
						for (y -= 1; y >= 24 && y <= 25; y++)
						{
							if (map[x][y] == '*')
							{
								counter++;

							}
						}
						i++;
					}
					map[x - 1][y] = counter;
				}
			}
	}
	for (x = 0; x < 10; x++)
		for (y = 0; y < 26; y++)
		{
			if (map[x][y] == '*')
				cout << "* ";
			else
				cout << map[x][y] << ' ';
			if (y == 25)
				cout << endl;
		}
	return 0;
}