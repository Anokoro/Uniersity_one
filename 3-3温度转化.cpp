/*1552239 ��2 �����*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{   
	float c,F;
	cout<< "������һ�������¶�F��"<<endl;
	cin >> F;
	c = (F - 32); 
	c = 5.0 / 9 * c;
	cout << setiosflags(ios::fixed) << setprecision(2) << endl;
	cout << "��Ӧ�������¶�C��" << float(c)<<endl;
	return 0;
}