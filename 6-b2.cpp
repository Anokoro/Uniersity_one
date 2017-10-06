#include <iostream>
using namespace std;
void merge(int *la, int *lb, int *lc)
{	
	while (*la != -1 && *lb != -1) {
		*lc++ = (*la < *lb) ? *la++ : *lb++;
	}
	while (*la != -1) {
		*lc++ = *la++;
	}
	while (*lb != -1) {
		*lc++ = *lb++;
	}
	*lc = -1;
}
int main()
{
	int a[] = { 1,3,5,7,12,-1 }, b[] = { 2,4,10,11,18,-1 }, c[40] = {0}, *p = a, *q = b, *m = c, i;
	merge(p, q, m);
	for (i = 0;*(c+i)!=-1; i++)             // Êä³öc
		if (*(c + i) != 0)
			cout << *(c + i) << ' ';
	cout << endl;
	return 0;
}