/*1552239 ��2 ����� */
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a;
	int  b, c, d, e, f, g, h, i, j, k, l, m;
	cin >> a;
	a = a + 1e-3;
	cout << setiosflags(ios::fixed) << setprecision(2) << endl;
	cout << "ʮ��λ:" << (b = int(a / 1000000000.00)) << endl;
	a = a - b * 1000000000.00;
	cout << "��λ  :" << (c = int(a / 100000000.00)) << endl;
	a = a - c * 100000000.00;
	cout << "ǧ��λ:" << (d = int(a / 10000000.00)) << endl;
	a = a - d * 10000000.00;
	cout << "����λ:" << (e = int(a / 1000000.00)) << endl;
	a = a - e * 1000000.00;
	cout << "ʮ��λ:" << (f = int(a / 100000.00)) << endl;
	a = a - f * 100000.00;
	cout << "��λ  :" << (g = int(a / 10000.00)) << endl;
	a = a - g * 10000.00;
	cout << "ǧλ  :" << (h = int(a / 1000.00)) << endl;
	a = a - h * 1000.00;
	cout << "��λ  :" << (i = int(a / 100.00)) << endl;
	a = a - i * 100.00;
	cout << "ʮλ  :" << (j = int(a / 10.00)) << endl;
	a = a - j * 10.00;
	cout << "Ԫ    :" << (k = int(a / 1.00)) << endl;
	a = a - k;
	cout << "��    :" << (l = int(a / 0.1)) << endl;
	a = a - l*0.1;
	cout << "��    :" << (m = int(a / 0.01)) << endl;
	cout << "��д��";
	switch (b)
	{
	case 1:
		cout << "Ҽʰ";
		break;
	case 2:
		cout << "��ʰ";
		break;
	case 3:
		cout << "��ʰ";
		break;
	case 4:
		cout << "��ʰ";
		break;
	case 5:
		cout << "��ʰ";
		break;
	case 6:
		cout << "½ʰ";
		break;
	case 7:
		cout << "��ʰ";
		break;
	case 8:
		cout << "��ʰ";
		break;
	case 9:
		cout << "��ʰ";
		break;
	}
	if ((b!=0&&c==0)&&d == 0 && e == 0 && f == 0 && g == 0 && h == 0 && i == 0 && j == 0 && k == 0 && l == 0 && m == 0)
		cout << "��Ԫ\n";
	if (b!=0&&c == 0&&(d!=0||e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0 || k != 0 || l != 0 || m != 0 ))
		cout << "��";
	switch (c)
	{
	case 1:
		cout << "Ҽ��";
		break;
	case 2:
		cout << "����";
		break;
	case 3:
		cout << "����";
		break;
	case 4:
		cout << "����";
		break;
	case 5:
		cout << "����";
		break;
	case 6:
		cout << "½��";
		break;
	case 7:
		cout << "����";
		break;
	case 8:
		cout << "����"; 
		break;
	case 9:
		cout << "����";
		break;
	}
	
	if ((d == 0 && e != 0 || d == 0 && e == 0 && f != 0 || d == 0 && e == 0 && f == 0 && g != 0) && (b != 0 || c != 0))
		cout << "��";
	switch (d)
	{
	case 1:
		cout << "ҼǪ";
		break;
	case 2:
		cout << "��Ǫ";
		break;
	case 3:
		cout << "��Ǫ";
		break;
	case 4:
		cout << "��Ǫ";
		break;
	case 5:
		cout << "��Ǫ";
		break;
	case 6:
		cout << "½Ǫ";
		break;
	case 7:
		cout << "��Ǫ";
		break;
	case 8:
		cout << "��Ǫ";
		break;
	case 9:
		cout << "��Ǫ";
		break;
	}
	if (d != 0 && e == 0 && f == 0 && g == 0)
		cout << "��";
	if (d != 0 && (e == 0 && f != 0 || e == 0 && f == 0 && g != 0))
		cout << "��";
	switch (e)
	{
	case 1:
		cout << "Ҽ��";
		break;
	case 2:
		cout << "����";
		break;
	case 3:
		cout << "����";
		break;
	case 4:
		cout << "����";
		break;
	case 5:
		cout << "���";
		break;
	case 6:
		cout << "½��";
		break;
	case 7:
		cout << "���";
		break;
	case 8:
		cout << "�ư�";
		break;
	case 9:
		cout << "����";
		break;
	}
	if (e != 0 && f == 0 && g == 0)
		cout << "��";
	if ((e != 0 && f == 0 && g != 0))
		cout << "��";
	switch (f)
	{
	case 1:
		cout << "Ҽʰ";
		break;
	case 2:
		cout << "��ʰ";
		break;
	case 3:
		cout << "��ʰ";
		break;
	case 4:
		cout << "��ʰ";
		break;
	case 5:
		cout << "��ʰ";
		break;
	case 6:
		cout << "½ʰ";
		break;
	case 7:
		cout << "��ʰ";
		break;
	case 8:
		cout << "��ʰ";
		break;
	case 9:
		cout << "��ʰ";
		break;
	}
	if (f != 0 && g == 0)
		cout << "��";
	switch (g)
	{
	case 1:
		cout << "Ҽ��";
		break;
	case 2:
		cout << "����";
		break;
	case 3:
		cout << "����"; 
		break;
	case 4:
		cout << "����";
		break;
	case 5:
		cout << "����";
		break;
	case 6:
		cout << "½��";
		break;
	case 7:
		cout << "����";
		break;
	case 8:
		cout << "����";
		break;
	case 9:
		cout << "����";
		break;
	}
	if (( d != 0 || e != 0 || f != 0 || g != 0) && h == 0 && i == 0 && j == 0 && k == 0 && l == 0 && m == 0)
		cout << "��Ԫ��\n";
	if (h == 0 &&i == 0 && j == 0 && k==0&& (d != 0 || e != 0 || f != 0 || g != 0  ))
		cout << "Ԫ";
	if ((d != 0 || e != 0 || f != 0 || g != 0) &&
		(h == 0 && i != 0
			|| h == 0 && i == 0 && j != 0
			|| h == 0 && i == 0 && j == 0 && k != 0))
		cout << "��";
	switch (h)
	{
	case 1:
		cout << "ҼǪ";
		break;
	case 2:
		cout << "��Ǫ";
		break;
	case 3:
		cout << "��Ǫ";
		break;
	case 4:
		cout << "��Ǫ";
		break;
	case 5:
		cout << "��Ǫ";
		break;
	case 6:
		cout << "½Ǫ";
		break;
	case 7:
		cout << "��Ǫ";
		break;
	case 8:
		cout << "��Ǫ";
		break;
	case 9:
		cout << "��Ǫ";
		break;
	}
	if (h != 0 && i == 0 && j != 0)
		cout << "��";
	switch (i)
	{
	case 1:
		cout << "Ҽ��";
		break;
	case 2:
		cout << "����";
		break;
	case 3:
		cout << "����";
		break;
	case 4:
		cout << "����";
		break;
	case 5:
		cout << "���";
		break;
	case 6:
		cout << "½��";
		break;
	case 7:
		cout << "���";
		break;
	case 8:
		cout << "�ư�";
		break;
	case 9:
		cout << "����";
		break;
	}
	if (h != 0 && i == 0 && j == 0 && k != 0)
		cout << "��";
	if (i != 0 && j == 0 && k != 0)
		cout << "��";
	switch (j)
	{
	case 1:
		cout << "Ҽʰ";
		break;
	case 2:
		cout << "��ʰ";
		break;
	case 3:
		cout << "��ʰ";
		break;
	case 4:
		cout << "��ʰ";
		break;
	case 5:
		cout << "��ʰ";
		break;
	case 6:
		cout << "½ʰ";
		break;
	case 7:
		cout << "��ʰ";
		break;
	case 8:
		cout << "��ʰ";
		break;
	case 9:
		cout << "��ʰ";
		break;
	}
    switch (k)
	{
	case 1:
		cout << "ҼԪ";
		break;
	case 2:
		cout << "��Ԫ";
		break;
	case 3:
		cout << "��Ԫ";
		break;
	case 4:
		cout << "��Ԫ";
		break;
	case 5:
		cout << "��Ԫ";
		break;
	case 6:
		cout << "½Ԫ";
		break;
	case 7:
		cout << "��Ԫ";
		break;
	case 8:
		cout << "��Ԫ";
	    break;
	case 9:
		cout << "��Ԫ";
		break;
	}
	if (k == 0&&(b!=0||c != 0 || d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0 ))
		cout << "Ԫ";
	if (l == 0 && m == 0)
		cout << "��\n";
	switch (l)
	{
	case 1:
		cout << "Ҽ��";
		break;
	case 2:
		cout << "����";
		break;
	case 3:
		cout << "����";
		break;
	case 4:
		cout << "����";
		break;
	case 5:
		cout << "���";
		break;
	case 6:
		cout << "½��";
		break;
	case 7:
		cout << "���";
		break;
	case 8:
		cout << "�ƽ�";
		break;
	case 9:
		cout << "����";
		break;
	}
	if (l != 0 && m == 0)
		cout << "��\n" ;
	switch (m)
	{
	case 1:
		cout << "Ҽ��";
		break;
	case 2:
		cout << "����";
		break;
	case 3:
		cout << "����";
		break;
	case 4:
		cout << "����";
		break;
	case 5:
		cout << "���";
		break;
	case 6:
		cout << "½��";
		break;
	case 7:
		cout << "���";
		break;
	case 8:
		cout << "�Ʒ�";
		break;
	case 9:
		cout << "����";
		break;
	}
	cout << endl;
	return 0;
}