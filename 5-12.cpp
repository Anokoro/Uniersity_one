/*1552239 2∞‡ ‘¿ÍªÁ‚ */
#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
	char zifu[2][100] = {0};
	static int i,j;
	cout << "«Î ‰»Î√‹¬Î£∫"  ;
	for (i = 0; i <= 99; i++)
	{
		zifu[0][i] = getchar();
		if (zifu[0][i] == '\n')
			break;
	}
	
	for (j = 0; j <= i; j++)
	{
		if (zifu[0][j] >= 'a'&&zifu[0][j] <= 'z')
			zifu[1][j] = 26 - (zifu[0][j] - 96) + 96+1;
		else if (zifu[0][j] >= 'A'&&zifu[0][j] <= 'Z')
			zifu[1][j] = 26 - (zifu[0][j] - 64) + 64+1;
		else
			zifu[1][j] = zifu[0][j];
	}
	cout << "√‹¬Î «£∫";
	for (j = 0; j <= i  ; j++)
		if(zifu[0][j] != '\0')
		cout << zifu[0][j];
	cout << endl;
	cout << "‘≠Œƒ «£∫";
	for (j = 0; j <= i ; j++)
		if(zifu[1][j] != '\0')
		cout << zifu[1][j];
	cout << endl;
	return 0;
}