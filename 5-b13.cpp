/*1552239 ��2 ����� */
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<iomanip>
char chrstr[] = "��Ҽ��������½��ƾ�";
char result[256], mid[2];
void change(int x);
using namespace std;
int main()
{
	double a;
	int  b, c, d, e, f, g, h, i, j, k, l, m, n;
	cin >> a;
	for (; a > 1e10 || a < 0;)
	{
		cout << "�����������������" << endl;
		cin >> a;
	}
	a = a + 1e-3;
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
		change(b);
	if (b != 0)
		strcat(result, "ʰ");
	if (c != 0)
		change(c);
	if (b != 0 || c != 0)
		strcat(result, "��");
	if (c != 0 && d == 0 && e == 0 && f == 0 && g == 0 && h == 0 && i == 0 && j == 0 && k == 0 && l == 0 && m == 0)
		strcat(result, "��Բ��");

	if ((d == 0 && e != 0 || d == 0 && e == 0 && f != 0 || d == 0 && e == 0 && f == 0 && g != 0) && (b != 0 || c != 0))
		change(d);
	if (d != 0)
	{
		change(d);
		strcat(result, "Ǫ");
	}
	if (d != 0 && e == 0 && f == 0 && g == 0)
		strcat(result, "�f");
	if (d != 0 && (e == 0 && f != 0 || e == 0 && f == 0 && g != 0))
		change(e);

	if (e != 0)
	{
		change(e);
		strcat(result, "��");
	}
	if (e != 0 && f == 0 && g == 0)
		strcat(result, "�f");
	if ((e != 0 && f == 0 && g != 0))
		change(f);
	if (f != 0)
	{
		change(f);
		strcat(result, "ʰ");
	}
	if (f != 0 && g == 0)
		strcat(result, "�f");
	if (g != 0)
	{
		change(g);
		strcat(result, "�f");
	}
	if ((d != 0 || e != 0 || f != 0 || g != 0) && h == 0 && i == 0 && j == 0 && k == 0 && l == 0 && m == 0)
		strcat(result, "��Բ��");
	if (h == 0 && i == 0 && j == 0 && k == 0 && (d != 0 || e != 0 || f != 0 || g != 0))
		strcat(result, "Բ");
	if ((d != 0 || e != 0 || f != 0 || g != 0) &&
		(h == 0 && i != 0
			|| h == 0 && i == 0 && j != 0
			|| h == 0 && i == 0 && j == 0 && k != 0))
		change(h);
	if (h != 0)
	{
		change(h);
		strcat(result, "Ǫ");
	}
	if (h != 0 && i == 0 && j != 0)
		change(i);
	if (i != 0)
	{
		change(i);
		strcat(result, "��");
	}
	if (h != 0 && i == 0 && j == 0 && k != 0)
		change(i);
	if (i != 0 && j == 0 && k != 0)
		change(j);
	if (j != 0)
	{
		change(j);
		strcat(result, "ʰ");
	}
	if (k != 0)
	{
		change(k);
		strcat(result, "Բ");
	}
	if (k == 0 && (b != 0 || c != 0 || d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0))
		strcat(result, "Բ");
	if (l == 0 && m == 0)
		strcat(result, "��");
	if (l != 0)
	{
		change(l);
		strcat(result, "��");
	}
	if (l != 0 && m == 0)
		strcat(result, "��");
	if (m != 0)
	{
		change(m);
		strcat(result, "��");
	}
	cout << endl;
	for (n = 0; n <= 120; n++)
		if (result[n] != 0)
			cout << result[n];
	cout << endl;
	return 0;
}

void change(int x)
{
	mid[0] = chrstr[x * 2];
	mid[1] = chrstr[x * 2 + 1];
	strcat(result, mid);
}