/*1552239 ��2 ����� */
#include <iostream>
#include <cmath>
#include "4-b6.h"
using namespace std;
int main()
{
	double a, b, c, m;
	cin >> a >> b >> c;
	m = b*b - 4 * a*c;
	if (a == 0)
	{
		if (b == 0)
			cout << "����������������롣" << endl;
		else
			fc0(b, c);
	}
	else
	{
		if (m > 0)
			fc1(a, b, c);
		if (m == 0)
			fc2(a, b, c);
		if (m < 0)
			fc3(a, b, c);
	}
	return 0;
}