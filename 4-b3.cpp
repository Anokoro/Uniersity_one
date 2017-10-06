/*1552239 计2 岳昊玮 */
#include <iostream>
using namespace std;
int is_power(int num, int base);
int main()
{
	int num, base,x;
	cout << "请输入一个正整数和一个基数：";
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