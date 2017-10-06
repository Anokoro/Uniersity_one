/*1552239 计2 岳昊玮 */
#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, f;
	cin >> a;

	cout << "万位:" << (b = a / 10000) << endl;
	a = a - b * 10000;
	cout << "千位:" << (c = a / 1000) << endl;
	a = a - c * 1000;
	cout << "百位:" << (d = a / 100) << endl;
	a = a - d * 100;
	cout << "十位:" << (e = a / 10) << endl;
	a = a - e * 10;
	cout << "个位:" << (f = a) << endl;
	return 0;
}