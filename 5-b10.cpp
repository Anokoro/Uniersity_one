#include<iostream>
using namespace std;


int main()
{
	int n;
	char size[3][30],size_ex[30];
	
	cout << "ÇëÊäÈë3¸ö×Ö·û´®." << endl;
	for (n = 0; n < 3; n++)
	{
		cin >> size[n];
	}
	if (strcmp(size[0], size[1])>0)
	{
		for (n = 0; n < 30; n++)
		{
			size_ex[n] = size[0][n];
			size[0][n] = size[1][n];
			size[1][n] = size_ex[n];
		}
	}
	if (strcmp(size[1], size[2])>0)
	{
		for (n = 0; n < 30; n++)
		{
			size_ex[n] = size[1][n];
			size[1][n] = size[2][n];
			size[2][n] = size_ex[n];
		}
	}
	if (strcmp(size[0], size[1])>0)
	{
		for (n = 0; n < 30; n++)
		{
			size_ex[n] = size[0][n];
			size[0][n] = size[1][n];
			size[1][n] = size_ex[n];
		}
	}
	for (n = 0; n < 3; n++)
		cout << size[n] << ' ';
	cout << endl;
}
