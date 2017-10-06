/*1552239 计2 岳昊玮 */
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double x=1,a=0,y;
	
		LABEL1:
		{
			x = (x + a) / 2;
			y = 2 * x*x*x - 9 * x*x + 12 * x - 3;
		if (y < 0&& (x - a) > 1e-5)
			goto LABEL2;
		}
		LABEL2:
		{
			a = (x + a) / 2;
			y = 2 * a*a*a - 9 * a*a + 12 * a - 3;
		if (y > 0&&(x - a) > 1e-5)
			goto LABEL2;
		}
	
	cout << "方程在（0,1）之间的根为：" << x << endl;
	return 0;
}