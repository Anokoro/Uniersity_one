
/* 1552239 ����� �ƶ� */
#include <iostream>
#include<iomanip>
using namespace std;

/* �ɸ�����Ҫ�����Ӧ������ */

/* ������Ա��������κ��޸�
���������⣬�������κκ�����������㡱-������!!!!!! */
void daxie(int num, int flag_of_zero)
{
	switch (num) {
	case 0:
		if (flag_of_zero)	//�˱��ʲô��˼������˼��
			cout << "��";
		break;
	case 1:
		cout << "Ҽ";
		break;
	case 2:
		cout << "��";
		break;
	case 3:
		cout << "��";
		break;
	case 4:
		cout << "��";
		break;
	case 5:
		cout << "��";
		break;
	case 6:
		cout << "½";
		break;
	case 7:
		cout << "��";
		break;
	case 8:
		cout << "��";
		break;
	case 9:
		cout << "��";
		break;
	default:
		cout << "error";
		break;
	}
}

/* �ɸ�����Ҫ�Զ����������� */


/* ������Ҫ���main���� */
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
	cout << "��д��";
	if (b != 0)
	{
		daxie(b,b);
		cout << "ʰ";
	}
	if ((b != 0 && c == 0) && d == 0 && e == 0 && f == 0 && g == 0 && h == 0 && i == 0 && j == 0 && k == 0 && l == 0 && m == 0)
		cout << "��Բ\n";
	if (b != 0 && c == 0 && (d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0 || k != 0 || l != 0 || m != 0))
		cout << "��";
	if (b != 0 && c != 0)
	{
		daxie(c,c);
		cout << "��";
	}
	if(d==0)
		daxie(d,(d == 0 && e != 0 || d == 0 && e == 0 && f != 0 || d == 0 && e == 0 && f == 0 && g != 0) && (b != 0 || c != 0));
	if (d != 0)
	{
		daxie(d,d);
		cout << "Ǫ";
	}
	if (d != 0 && e == 0 && f == 0 && g == 0)
		cout << "�f";
	if(e==0)
		daxie(e,d != 0 && (e == 0 && f != 0 || e == 0 && f == 0 && g != 0));
	if (e != 0)
	{
		daxie(e,e);
		cout << "��";
	}
	if (e != 0 && f == 0 && g == 0)
		cout << "�f";
	if (f==0)
		daxie(f,(e != 0 && f == 0 && g != 0));
	if (f != 0)
	{
		daxie(f,f);
		cout << "ʰ";
	}
	if (f != 0 && g == 0)
		cout << "�f";
	if (g != 0)
	{
		daxie(g,g);
		cout << "�f";
	}
	if ((d != 0 || e != 0 || f != 0 || g != 0) && h == 0 && i == 0 && j == 0 && k == 0 && l == 0 && m == 0)
		cout << "�fԲ��\n";
	if (h == 0 && i == 0 && j == 0 && k == 0 && (d != 0 || e != 0 || f != 0 || g != 0))
		cout << "Բ";
	if (h==0)
		daxie(h,(d != 0 || e != 0 || f != 0 || g != 0) &&
		(h == 0 && i != 0
			|| h == 0 && i == 0 && j != 0
			|| h == 0 && i == 0 && j == 0 && k != 0));
	if (h != 0)
	{
		daxie(h,h);
		cout << "Ǫ";
	}
	if (i==0)
		daxie(i,h != 0 && i == 0 && j != 0);
	if (i != 0)
	{
		daxie(i,i);
		cout << "��";
	}
	if (i==0)
		daxie(i,h != 0 && i == 0 && j == 0 && k != 0);
	if (j==0)
		daxie(j,i != 0 && j == 0 && k != 0);
	if (j != 0)
	{
		daxie(j,j);
		cout << "ʰ";
	}
	if (k != 0)
	{
		daxie(k,k);
		cout << "Բ";
	}
	if (k == 0 && (b != 0 || c != 0 || d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0))
		cout << "Բ";
	if (l == 0 && m == 0)
		cout << "��\n";

	if (l != 0)
	{
		daxie(l,l);
		cout << "��";
	}
	if (l != 0 && m == 0)
		cout << "��\n";
	if (m != 0)
	{
		daxie(m,m);
		cout << "��";
	}
	cout << endl;
	return 0;
}
