/*1552239 º∆2 ‘¿ÍªÁ‚ */
#include <iostream>
using namespace std;
int main()
{
	int a = 2, b=1, sum=0;
	for (; a <= 1000; a++)
	{
		for (b = 1; b < a; b++)
		{
			if (a%b == 0)
				sum += b;
		}
		if (sum == a)
		{
			cout << a << ',' << "its factors are ";
			for (b = 1; b < a; b++)
			{
				if (a%b == 0)
					cout << b << ',';
			}
			cout << endl;
		}
		sum = 0;
	}
	return 0;
}