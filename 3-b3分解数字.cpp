	/*1552239 ��2 ����� */
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
		cout << "ʮ��λ:" << (b = int (a / 1000000000.00)) << endl;
		a =a- b * 1000000000.00;

		cout << "��λ:" << (c = int(a / 100000000.00)) << endl;
		a = a - c * 100000000.00;

		cout << "ǧ��λ:" << (d = int(a / 10000000.00)) << endl;
		a = a - d * 10000000.00;
		
		cout << "����λ:" << (e = int(a / 1000000.00)) << endl;
		a = a - e * 1000000.00;

		cout << "ʮ��λ:" << (f = int(a / 100000.00)) << endl;
		a = a - f * 100000.00;
		
		cout << "��λ:" << (g = int(a / 10000.00)) << endl;
		a = a - g * 10000.00;
		
		cout << "ǧλ:" << (h = int(a / 1000.00) )<< endl;
		a = a - h * 1000.00;
		
		cout << "��λ:" << (i = int(a / 100.00) )<< endl;
		a = a - i * 100.00;
		
		cout << "ʮλ:" << (j = int(a / 10.00) )<< endl;
		a = a - j * 10.00;
		
		cout << "��λ:" << (k = int(a/1.00)) << endl;
		a = a - k;
		
		cout << "ʮ��λ:" << (l = int(a / 0.1)) << endl;
		a = a - l*0.1;
		
		cout << "�ٷ�λ:" << (m = int(a / 0.01)) << endl;
		
		return 0;
	}