/*1552239 2班 岳昊玮*/
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,x;
	cin >> a;
	x =int (a / 1e5);
	if (x != 0)
		cout << "输入错误，请重新输入。" << endl;
	else
	
	b = int(a / 1e4);
	c = int(a / 1e3);
	d = int(a / 1e2);
	e = int(a / 1e1);
	if (b != 0)
		cout << "a为5位数。" << endl;
	else if (c != 0)
		cout << "a为4位数" << endl;
	     else if (d!= 0)
		     cout << "a为3位数" << endl;
	           else if (e != 0)
		           cout << "a为2位数" << endl;
	                else
		                cout << "a为个位数" << endl;
    int  f,g, h, i, j;
	f = int(a / 1e4);
	g = int(a / 1e3) % 10;
	h = int(a / 1e2) % 10;
	i = int(a / 10) % 10;
	j = a % 10;
	if (f != 0)
		cout  << f ;
	if (g != 0 || (g == 0 && f != 0))
		cout << ' '<< g ;
	if (h != 0 || (h == 0 &&(f!= 0||g!=0)))
		cout << ' ' << h ;
	if (i != 0 || (i == 0 &&((f != 0 || g != 0||h!=0))))
		cout << ' ' << i ;
	if (j != 0 || ((j == 0) && (f != 0 || g != 0 || h != 0||i!=0)))
		cout << ' ' << j << endl;/*到这里截止正输出，下面为逆输出*/
	    cout  << j ;
		if (i != 0 || (i == 0 && ((f != 0 || g != 0 || h != 0))))
			cout <<' '<< i ;
		if (h != 0 || (h == 0 && (f != 0 || g != 0)))
			cout << ' ' << h ;
		if (g != 0 || (g == 0 && f != 0))
			cout << ' ' << g ;
		if (f != 0)
			cout << ' '<< f<<endl;
	return 0;
}