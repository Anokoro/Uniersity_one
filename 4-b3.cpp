/*1552239 ��2 ����� */
#include <iostream>
using namespace std;
int is_power(int num, int base);
int main()
{
	int num, base,x;
	cout << "������һ����������һ��������";
	cin >> num >> base;
	cout << is_power(num, base) << endl;
	return 0;
}
int is_power(int num, int base)
{
	int x;
	for (x = 1; x < num;)
		x = x*base;
	return (num == x) ? 1 : 0;
}