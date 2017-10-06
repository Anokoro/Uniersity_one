/*1552239 2班 岳昊玮 */

#include <iostream>
using namespace std;
int main()
{
	
	int n;
	char origin[500] = {0};
	cout << "请输入一个英文语句" << endl;
	for (n = 0;; n++)
	{

		origin[n] = getchar();
		if (origin[n] == '\n')
			break;
	}
	cout << "转化后的结果为：" << endl;
	
		for (n = 0; origin[n] != 0; n++)
		
			if (origin[n] <= 'Z'&&origin[n] >= 'A')
				origin[n] += 32;
		
		for (n = 0; origin[n] != 0; n++)
		{
			if (origin[n] == ' '&&origin[n + 1] <= 'z'&&origin[n + 1] >= 'a')
				origin[n + 1] -= 32;
			if (origin[0] >= 'a'&&origin[0] <= 'z')
				origin[0] -= 32;
		}
	for (n = 0; origin[n] != 0; n++)
		cout << origin[n];
		return 0;
}