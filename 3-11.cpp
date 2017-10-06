/*1552239 2∞‡ ‘¿ÍªÁ‚*/
#include<iostream>
using namespace std;
int main()
{
	float a;
	int n;
	cout << "«Î ‰»Î≥…º®£∫\n";
	cin >> a;
	n = a / 10;
	switch (n)
	{
	    case 10:
	    case 9:
		    cout << "A\n";
		    break;
	    case 8:
		    cout << "B\n";
		    break;
	    case 7:
		    cout << "C\n";
		    break;
	    case 6:
		    cout << "D\n";
	    default:
		    cout << "E\n";
	}
	return 0;
}