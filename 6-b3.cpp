#include<iostream>
using namespace std;
void merge(int *la, int *lb, int *lc)
{
	while (*la != -1 && *lb != -1) {
		if(*la==*(la+1))
		{
			la++;
			continue;
		}
		if (*lb == *(lb + 1))
		{
			lb++;
			continue;
		}
		if (*lc != 0)
		{
			if (*la == *(lc - 1))
			{
				la++;
				continue;
			}
			else if (*lb == *(lc - 1)||*lb==*(lb-1))
			{
				lb++;
				continue;
			}
		}
		else if (*la != *lb)
			*lc++ = (*la > *lb) ? *la++ : *lb++;
		else if(*la==*lb)
		{
			*lc++ = *la++;
			lb++;
		}
	}
	while (*la != -1) {
		*lc++ = *la++;
	}
	while (*lb != -1) {
		*lc++ = *lb++;
	}
	*(++lc) = -1;


}




int main()
{
	int i,a[] = { 20,18,15,10,10,9,5,4,4,2,1,-1 }, b[] = { 19,18,17,11,9,7,6,5,2,2,-1 }, m[40] = { 0 }, *lc = m, *la = a, *lb = b;
	merge(la, lb, lc);
	for (i = 0; *lc != -1&&*lc!=0;)
		cout << *lc++ << ' ';
	cout << endl;

}