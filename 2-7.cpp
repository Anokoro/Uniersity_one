/*1552239 ��2 �����*/
#include <iostream>
using namespace std;
int main()
{
	int i, j, m, n;
	i = 8;
	j = 10;
	m = ++i + j++;
	n = (++i) + (++j) + m;
	cout << i << '\t' << j << '\t' << m << '\t' << n << endl;
	return 0;
}/*�������õ���������ͽ���ԣ��ȶ�i ,j��ʼ������ͨ��һϵ�������m,n��ֵ�������������4��������ֵ */