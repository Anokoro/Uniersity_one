/*1552239 ��2 ����� */
#include <iostream>
using namespace std;
int main()
{
	double  x,n=1,sum=1,t,i=2,b;
	
	cout << "������x��";
	cin >> x;
	b = x;
	sum += x;
	t = x / n;
	 while (t >= 1e-6)
	{
		b = b*x;
		n = n*i;
		t = b / n;
		sum += t;
		i = i + 1;
		
	}
	cout << "ex�Ľ���ֵΪ��" << sum << endl;
	return 0;
}