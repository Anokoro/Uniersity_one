/*1552239 2班 岳昊玮 */
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a[10][10] = { {1},{1,1} }, x, y;
	
	for (x = 0; x <= 9; x++)//总共10行
	{
		for (y = 0; y <= x; y++)//每行对应和行数相同个数
		{
			if (y == 0&&x<2 )
			{
				a[x][y] = 1;
				cout << setw(6) << a[x][y];
				if (x == 0)
					cout << endl;
			}
			if (x == y&&y!=0)
			{
				a[x][y] = 1;
				cout << setw(6)<<a[x][y]<<endl;
				break;
			}
			if(x>y&&x>1)
			{
				a[x][y] = a[x - 1][y] + a[x - 1][y - 1];
				cout << setw(6) << a[x][y];
			}
		}
	}
		return 0;
}