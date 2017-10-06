#include <iostream>
using namespace std;
int main()
{
	int m, n, i = 1, a, b = 1, sum;
	cout << "ÇëÊäÈëaºÍn£º" << endl;
	cin >> a >> n;
	for (m = 1, sum = 0; m <= n; m++)
	{
		while (i<m)
		{
			b = b * 10;
			i++;
		}
		sum += sum+ a*b;
	}
	cout << "sum=" << sum;
	return 0;
}