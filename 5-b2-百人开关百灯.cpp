/*1552239 2班 岳昊玮 */
#include <iostream>

using namespace std;
int main()
{
	int deng[101] = { 0 };
	int i,j;
	cout << "所有人都按过开关后还亮着的灯有：" << endl;
	for (i = 1; i <= 100; i++)
	{
		for (j = 1; j <= 100; j++)
		{
			if (j%i == 0)
			{
				if (deng[j] == 1)
					deng[j] = 0;
				else 
					deng[j] = 1;
			}
		}
	}
	for (j = 1; j <= 100; j++)
	{
		if (deng[j] == 1)
			cout << j << endl;
	}
	return 0;
}