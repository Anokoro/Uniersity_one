/*1552239 º∆2 ‘¿ÍªÁ‚ */
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
	cout << " Æ“⁄Œª:" << (b = int(a / 1000000000.00)) << endl;
	a = a - b * 1000000000.00;
	cout << "“⁄Œª  :" << (c = int(a / 100000000.00)) << endl;
	a = a - c * 100000000.00;
	cout << "«ßÕÚŒª:" << (d = int(a / 10000000.00)) << endl;
	a = a - d * 10000000.00;
	cout << "∞ŸÕÚŒª:" << (e = int(a / 1000000.00)) << endl;
	a = a - e * 1000000.00;
	cout << " ÆÕÚŒª:" << (f = int(a / 100000.00)) << endl;
	a = a - f * 100000.00;
	cout << "ÕÚŒª  :" << (g = int(a / 10000.00)) << endl;
	a = a - g * 10000.00;
	cout << "«ßŒª  :" << (h = int(a / 1000.00)) << endl;
	a = a - h * 1000.00;
	cout << "∞ŸŒª  :" << (i = int(a / 100.00)) << endl;
	a = a - i * 100.00;
	cout << " ÆŒª  :" << (j = int(a / 10.00)) << endl;
	a = a - j * 10.00;
	cout << "‘™    :" << (k = int(a / 1.00)) << endl;
	a = a - k;
	cout << "Ω«    :" << (l = int(a / 0.1)) << endl;
	a = a - l*0.1;
	cout << "∑÷    :" << (m = int(a / 0.01)) << endl;
	cout << "¥Û–¥£∫";
	switch (b)
	{
	case 1:
		cout << "“º ∞";
		break;
	case 2:
		cout << "∑° ∞";
		break;
	case 3:
		cout << "»˛ ∞";
		break;
	case 4:
		cout << "À¡ ∞";
		break;
	case 5:
		cout << "ŒÈ ∞";
		break;
	case 6:
		cout << "¬Ω ∞";
		break;
	case 7:
		cout << "∆‚ ∞";
		break;
	case 8:
		cout << "∞∆ ∞";
		break;
	case 9:
		cout << "æ¡ ∞";
		break;
	}
	if ((b!=0&&c==0)&&d == 0 && e == 0 && f == 0 && g == 0 && h == 0 && i == 0 && j == 0 && k == 0 && l == 0 && m == 0)
		cout << "“⁄‘™\n";
	if (b!=0&&c == 0&&(d!=0||e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0 || k != 0 || l != 0 || m != 0 ))
		cout << "“⁄";
	switch (c)
	{
	case 1:
		cout << "“º“⁄";
		break;
	case 2:
		cout << "∑°“⁄";
		break;
	case 3:
		cout << "»˛“⁄";
		break;
	case 4:
		cout << "À¡“⁄";
		break;
	case 5:
		cout << "ŒÈ“⁄";
		break;
	case 6:
		cout << "¬Ω“⁄";
		break;
	case 7:
		cout << "∆‚“⁄";
		break;
	case 8:
		cout << "∞∆“⁄"; 
		break;
	case 9:
		cout << "æ¡“⁄";
		break;
	}
	
	if ((d == 0 && e != 0 || d == 0 && e == 0 && f != 0 || d == 0 && e == 0 && f == 0 && g != 0) && (b != 0 || c != 0))
		cout << "¡„";
	switch (d)
	{
	case 1:
		cout << "“º«™";
		break;
	case 2:
		cout << "∑°«™";
		break;
	case 3:
		cout << "»˛«™";
		break;
	case 4:
		cout << "À¡«™";
		break;
	case 5:
		cout << "ŒÈ«™";
		break;
	case 6:
		cout << "¬Ω«™";
		break;
	case 7:
		cout << "∆‚«™";
		break;
	case 8:
		cout << "∞∆«™";
		break;
	case 9:
		cout << "æ¡«™";
		break;
	}
	if (d != 0 && e == 0 && f == 0 && g == 0)
		cout << "ÕÚ";
	if (d != 0 && (e == 0 && f != 0 || e == 0 && f == 0 && g != 0))
		cout << "¡„";
	switch (e)
	{
	case 1:
		cout << "“º∞€";
		break;
	case 2:
		cout << "∑°∞€";
		break;
	case 3:
		cout << "»˛∞€";
		break;
	case 4:
		cout << "À¡∞€";
		break;
	case 5:
		cout << "ŒÈ∞€";
		break;
	case 6:
		cout << "¬Ω∞€";
		break;
	case 7:
		cout << "∆‚∞€";
		break;
	case 8:
		cout << "∞∆∞€";
		break;
	case 9:
		cout << "æ¡∞€";
		break;
	}
	if (e != 0 && f == 0 && g == 0)
		cout << "ÕÚ";
	if ((e != 0 && f == 0 && g != 0))
		cout << "¡„";
	switch (f)
	{
	case 1:
		cout << "“º ∞";
		break;
	case 2:
		cout << "∑° ∞";
		break;
	case 3:
		cout << "»˛ ∞";
		break;
	case 4:
		cout << "À¡ ∞";
		break;
	case 5:
		cout << "ŒÈ ∞";
		break;
	case 6:
		cout << "¬Ω ∞";
		break;
	case 7:
		cout << "∆‚ ∞";
		break;
	case 8:
		cout << "∞∆ ∞";
		break;
	case 9:
		cout << "æ¡ ∞";
		break;
	}
	if (f != 0 && g == 0)
		cout << "ÕÚ";
	switch (g)
	{
	case 1:
		cout << "“ºÕÚ";
		break;
	case 2:
		cout << "∑°ÕÚ";
		break;
	case 3:
		cout << "»˛ÕÚ"; 
		break;
	case 4:
		cout << "À¡ÕÚ";
		break;
	case 5:
		cout << "ŒÈÕÚ";
		break;
	case 6:
		cout << "¬ΩÕÚ";
		break;
	case 7:
		cout << "∆‚ÕÚ";
		break;
	case 8:
		cout << "∞∆ÕÚ";
		break;
	case 9:
		cout << "æ¡ÕÚ";
		break;
	}
	if (( d != 0 || e != 0 || f != 0 || g != 0) && h == 0 && i == 0 && j == 0 && k == 0 && l == 0 && m == 0)
		cout << "ÕÚ‘™’˚\n";
	if (h == 0 &&i == 0 && j == 0 && k==0&& (d != 0 || e != 0 || f != 0 || g != 0  ))
		cout << "‘™";
	if ((d != 0 || e != 0 || f != 0 || g != 0) &&
		(h == 0 && i != 0
			|| h == 0 && i == 0 && j != 0
			|| h == 0 && i == 0 && j == 0 && k != 0))
		cout << "¡„";
	switch (h)
	{
	case 1:
		cout << "“º«™";
		break;
	case 2:
		cout << "∑°«™";
		break;
	case 3:
		cout << "»˛«™";
		break;
	case 4:
		cout << "À¡«™";
		break;
	case 5:
		cout << "ŒÈ«™";
		break;
	case 6:
		cout << "¬Ω«™";
		break;
	case 7:
		cout << "∆‚«™";
		break;
	case 8:
		cout << "∞∆«™";
		break;
	case 9:
		cout << "æ¡«™";
		break;
	}
	if (h != 0 && i == 0 && j != 0)
		cout << "¡„";
	switch (i)
	{
	case 1:
		cout << "“º∞€";
		break;
	case 2:
		cout << "∑°∞€";
		break;
	case 3:
		cout << "»˛∞€";
		break;
	case 4:
		cout << "À¡∞€";
		break;
	case 5:
		cout << "ŒÈ∞€";
		break;
	case 6:
		cout << "¬Ω∞€";
		break;
	case 7:
		cout << "∆‚∞€";
		break;
	case 8:
		cout << "∞∆∞€";
		break;
	case 9:
		cout << "æ¡∞€";
		break;
	}
	if (h != 0 && i == 0 && j == 0 && k != 0)
		cout << "¡„";
	if (i != 0 && j == 0 && k != 0)
		cout << "¡„";
	switch (j)
	{
	case 1:
		cout << "“º ∞";
		break;
	case 2:
		cout << "∑° ∞";
		break;
	case 3:
		cout << "»˛ ∞";
		break;
	case 4:
		cout << "À¡ ∞";
		break;
	case 5:
		cout << "ŒÈ ∞";
		break;
	case 6:
		cout << "¬Ω ∞";
		break;
	case 7:
		cout << "∆‚ ∞";
		break;
	case 8:
		cout << "∞∆ ∞";
		break;
	case 9:
		cout << "æ¡ ∞";
		break;
	}
    switch (k)
	{
	case 1:
		cout << "“º‘™";
		break;
	case 2:
		cout << "∑°‘™";
		break;
	case 3:
		cout << "»˛‘™";
		break;
	case 4:
		cout << "À¡‘™";
		break;
	case 5:
		cout << "ŒÈ‘™";
		break;
	case 6:
		cout << "¬Ω‘™";
		break;
	case 7:
		cout << "∆‚‘™";
		break;
	case 8:
		cout << "∞∆‘™";
	    break;
	case 9:
		cout << "æ¡‘™";
		break;
	}
	if (k == 0&&(b!=0||c != 0 || d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0 ))
		cout << "‘™";
	if (l == 0 && m == 0)
		cout << "’˚\n";
	switch (l)
	{
	case 1:
		cout << "“ºΩ«";
		break;
	case 2:
		cout << "∑°Ω«";
		break;
	case 3:
		cout << "»˛Ω«";
		break;
	case 4:
		cout << "À¡Ω«";
		break;
	case 5:
		cout << "ŒÈΩ«";
		break;
	case 6:
		cout << "¬ΩΩ«";
		break;
	case 7:
		cout << "∆‚Ω«";
		break;
	case 8:
		cout << "∞∆Ω«";
		break;
	case 9:
		cout << "æ¡Ω«";
		break;
	}
	if (l != 0 && m == 0)
		cout << "’˚\n" ;
	switch (m)
	{
	case 1:
		cout << "“º∑÷";
		break;
	case 2:
		cout << "∑°∑÷";
		break;
	case 3:
		cout << "»˛∑÷";
		break;
	case 4:
		cout << "À¡∑÷";
		break;
	case 5:
		cout << "ŒÈ∑÷";
		break;
	case 6:
		cout << "¬Ω∑÷";
		break;
	case 7:
		cout << "∆‚∑÷";
		break;
	case 8:
		cout << "∞∆∑÷";
		break;
	case 9:
		cout << "æ¡∑÷";
		break;
	}
	cout << endl;
	return 0;
}