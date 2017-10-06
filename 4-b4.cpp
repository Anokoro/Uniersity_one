
/* 1552239 岳昊玮 计二 */
#include <iostream>
#include<iomanip>
using namespace std;

/* 可根据需要添加相应的内容 */

/* 不允许对本函数做任何修改
除本函数外，不允许任何函数中输出“零”-“玖”!!!!!! */
void daxie(int num, int flag_of_zero)
{
	switch (num) {
	case 0:
		if (flag_of_zero)	//此标记什么意思请自行思考
			cout << "零";
		break;
	case 1:
		cout << "壹";
		break;
	case 2:
		cout << "贰";
		break;
	case 3:
		cout << "叁";
		break;
	case 4:
		cout << "肆";
		break;
	case 5:
		cout << "伍";
		break;
	case 6:
		cout << "陆";
		break;
	case 7:
		cout << "柒";
		break;
	case 8:
		cout << "捌";
		break;
	case 9:
		cout << "玖";
		break;
	default:
		cout << "error";
		break;
	}
}

/* 可根据需要自定义其它函数 */


/* 根据需要完成main函数 */
int main()
{
	double a;
	int  b, c, d, e, f, g, h, i, j, k, l, m;
	cin >> a;
	a = a + 1e-3;
	cout << setiosflags(ios::fixed) << setprecision(2) << endl;
	b = int(a / 1000000000.00);
	a = a - b * 1000000000.00;
	c = int(a / 100000000.00);
	a = a - c * 100000000.00;
	d = int(a / 10000000.00);
	a = a - d * 10000000.00;
	e = int(a / 1000000.00);
	a = a - e * 1000000.00;
	f = int(a / 100000.00);
	a = a - f * 100000.00;
	g = int(a / 10000.00);
	a = a - g * 10000.00;
	h = int(a / 1000.00);
	a = a - h * 1000.00;
	i = int(a / 100.00);
	a = a - i * 100.00;
	j = int(a / 10.00);
	a = a - j * 10.00;
	k = int(a / 1.00);
	a = a - k;
	l = int(a / 0.1);
	a = a - l*0.1;
	m = int(a / 0.01);
	cout << "大写：";
	if (b != 0)
	{
		daxie(b,b);
		cout << "拾";
	}
	if ((b != 0 && c == 0) && d == 0 && e == 0 && f == 0 && g == 0 && h == 0 && i == 0 && j == 0 && k == 0 && l == 0 && m == 0)
		cout << "亿圆\n";
	if (b != 0 && c == 0 && (d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0 || k != 0 || l != 0 || m != 0))
		cout << "亿";
	if (b != 0 && c != 0)
	{
		daxie(c,c);
		cout << "亿";
	}
	if(d==0)
		daxie(d,(d == 0 && e != 0 || d == 0 && e == 0 && f != 0 || d == 0 && e == 0 && f == 0 && g != 0) && (b != 0 || c != 0));
	if (d != 0)
	{
		daxie(d,d);
		cout << "仟";
	}
	if (d != 0 && e == 0 && f == 0 && g == 0)
		cout << "萬";
	if(e==0)
		daxie(e,d != 0 && (e == 0 && f != 0 || e == 0 && f == 0 && g != 0));
	if (e != 0)
	{
		daxie(e,e);
		cout << "佰";
	}
	if (e != 0 && f == 0 && g == 0)
		cout << "萬";
	if (f==0)
		daxie(f,(e != 0 && f == 0 && g != 0));
	if (f != 0)
	{
		daxie(f,f);
		cout << "拾";
	}
	if (f != 0 && g == 0)
		cout << "萬";
	if (g != 0)
	{
		daxie(g,g);
		cout << "萬";
	}
	if ((d != 0 || e != 0 || f != 0 || g != 0) && h == 0 && i == 0 && j == 0 && k == 0 && l == 0 && m == 0)
		cout << "萬圆整\n";
	if (h == 0 && i == 0 && j == 0 && k == 0 && (d != 0 || e != 0 || f != 0 || g != 0))
		cout << "圆";
	if (h==0)
		daxie(h,(d != 0 || e != 0 || f != 0 || g != 0) &&
		(h == 0 && i != 0
			|| h == 0 && i == 0 && j != 0
			|| h == 0 && i == 0 && j == 0 && k != 0));
	if (h != 0)
	{
		daxie(h,h);
		cout << "仟";
	}
	if (i==0)
		daxie(i,h != 0 && i == 0 && j != 0);
	if (i != 0)
	{
		daxie(i,i);
		cout << "佰";
	}
	if (i==0)
		daxie(i,h != 0 && i == 0 && j == 0 && k != 0);
	if (j==0)
		daxie(j,i != 0 && j == 0 && k != 0);
	if (j != 0)
	{
		daxie(j,j);
		cout << "拾";
	}
	if (k != 0)
	{
		daxie(k,k);
		cout << "圆";
	}
	if (k == 0 && (b != 0 || c != 0 || d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0))
		cout << "圆";
	if (l == 0 && m == 0)
		cout << "整\n";

	if (l != 0)
	{
		daxie(l,l);
		cout << "角";
	}
	if (l != 0 && m == 0)
		cout << "整\n";
	if (m != 0)
	{
		daxie(m,m);
		cout << "分";
	}
	cout << endl;
	return 0;
}
