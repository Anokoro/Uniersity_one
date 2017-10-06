	/*1552239 计2 岳昊玮 */
	#include <iostream>
    #include<iomanip>
	using namespace std;
	int main()
	{
		double a;
		int  b, c, d, e, f, g, h, i, j, k, l, m;
		cin >> a;
		a = a + 1e-3;
		cout <<setiosflags(ios::fixed) <<setprecision(2)<< endl;
		cout << "十亿位:" << (b = int (a / 1000000000.00)) << endl;
		a =a- b * 1000000000.00;

		cout << "亿位:" << (c = int(a / 100000000.00)) << endl;
		a = a - c * 100000000.00;

		cout << "千万位:" << (d = int(a / 10000000.00)) << endl;
		a = a - d * 10000000.00;
		
		cout << "百万位:" << (e = int(a / 1000000.00)) << endl;
		a = a - e * 1000000.00;

		cout << "十万位:" << (f = int(a / 100000.00)) << endl;
		a = a - f * 100000.00;
		
		cout << "万位:" << (g = int(a / 10000.00)) << endl;
		a = a - g * 10000.00;
		
		cout << "千位:" << (h = int(a / 1000.00) )<< endl;
		a = a - h * 1000.00;
		
		cout << "百位:" << (i = int(a / 100.00) )<< endl;
		a = a - i * 100.00;
		
		cout << "十位:" << (j = int(a / 10.00) )<< endl;
		a = a - j * 10.00;
		
		cout << "个位:" << (k = int(a/1.00)) << endl;
		a = a - k;
		
		cout << "十分位:" << (l = int(a / 0.1)) << endl;
		a = a - l*0.1;
		
		cout << "百分位:" << (m = int(a / 0.01)) << endl;
		
		return 0;
	}