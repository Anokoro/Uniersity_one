/*1552239 2�� ����� */
#include <iostream>

using namespace std;
int main()
{
	int deng[101] = { 0 };
	int i,j;
	cout << "�����˶��������غ����ŵĵ��У�" << endl;
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