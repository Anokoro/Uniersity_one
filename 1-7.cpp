/*1552239 2班 岳昊玮*/
#include <iostream >
using namespace std;
int main()
{
	int a, b, c;
	int f(int x, int y,int z);
	cin >> a >> b >> c;
	c =f(a, b, c);
	cout << c << endl;
	return 0;
}
int f(int x, int y, int z)
{
	int m;
	if (x < y)m = x;
	else m = y;
	if (z < m)m = z;
	return(m);
}/*这个程序的作用是找出3个数中的最小的数*/