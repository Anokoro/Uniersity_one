/*1552239 º∆2 ‘¿ÍªÁ‚ */
#include <iostream>
using namespace std;
int main()
{
	int a = 1, b = 1, c;
	for (; a < 10; a++)
	{
		for (b = 1; b <= a; b++)
		{
			c = a*b;
			cout << a << 'x' << b << '=' << c << ' ';
			if (c < 10)
				cout << ' ';
		}
		cout << endl;
	}
	return 0;
}