#include<iostream>
using namespace std;
int main()
{
	int x, y, z;
	cin >> x >> y;
	z = x + y;
	return (z);
	{
		int a, b, c;
		int add(int x, int y);
		c = add(a, b);
		cout << "a+b=" << c << endl;
		return 0;
	}
}//x,y,z以及c未定义变量。两个函数的顺序 颠倒导致add函数未定义。