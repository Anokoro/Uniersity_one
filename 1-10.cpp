/*1552239 2班 岳昊玮*/
#include <iostream>
using namespace std;
int main()
{
	void sort(int x, int y, int z);
	int x, y, z;
	cin >> x >> y >> z;
	sort(x, y, z);
	return 0;
}
void sort(int x, int y, int z)
{
	int temp;
	if (x > y) { temp = x; x = y; y = temp; }//内三个语句的作用是将x和y的值互换
	if (z < x) cout << z << ',' << x << ',' << y <<endl;
	else if(z<y)cout << x << ','<< z << ','  << y <<endl;
	else cout << x << ',' << y << ',' << z << endl;
}/*已经运行四次，发现这个程序的作用是将3个数从小到大排列顺序，并且第4组输入的方法错误，中间空格而不是逗号。*/