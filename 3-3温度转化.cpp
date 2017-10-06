/*1552239 计2 岳昊玮*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{   
	float c,F;
	cout<< "请输入一个华氏温度F："<<endl;
	cin >> F;
	c = (F - 32); 
	c = 5.0 / 9 * c;
	cout << setiosflags(ios::fixed) << setprecision(2) << endl;
	cout << "对应的摄氏温度C：" << float(c)<<endl;
	return 0;
}