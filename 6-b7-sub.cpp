/* 1552239 计二 岳昊玮 */

#include <iostream>
using namespace std;

/* 函数的原型定义不准变 */
int   tj_strlen(const char *str);
char *tj_strcat(char *s1, const char *s2);
char *tj_strcpy(char *s1, const char *s2);
char *tj_strncpy(char *s1, const char *s2, const int len);
int   tj_strcmp(const char *s1, const char *s2);
int   tj_strcasecmp(const char *s1, const char *s2);
int   tj_strncmp(const char *s1, const char *s2, const int len);
int   tj_strcasencmp(const char *s1, const char *s2, const int len);
char *tj_strupr(char *str);
char *tj_strlwr(char *str);
int   tj_strchr(const char *str, const char ch);
int   tj_strstr(const char *str, const char *substr);
int   tj_strrchr(const char *str, const char ch);
int   tj_strrstr(const char *str, const char *substr);
char *tj_strrev(char *str);

/* ----- 不允许定义任何形式的全局数组!!!!! ----- */

/* 函数实现部分，{ }内的东西可以任意调整，目前的return只是一个示例，可改变 */
int tj_strlen(const char *str)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
	if (str == NULL)
		return 0;
	int num=0;
	const char a='\0';
	if (str == NULL)
		return  sizeof(str);
	while (*str++ != '\0')
		num++;
    return num;
}

char *tj_strcat(char *s1, const char *s2)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
	if (s1 == NULL)
		return NULL;
	if (s2 == NULL)
		return s1;
	char* pTmp = s1;
	while (*s1 != '\0')
		s1++;
	while (*s2!='\0')
		*s1++ = *s2++;
	*s1 = '\0';
    return pTmp;
}

char *tj_strcpy(char *s1, const char *s2)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
	char *p = s1;
	if (s1 == NULL)
		return NULL;
	if (s2 == NULL)
	{
		*s1 = '\0';
		return " \b";

	}
	while (1)
	{
		*s1++ = *s2++;
		if (*(s2 - 1) == '\0')
			break;
	}
    return p;
}

char *tj_strncpy(char *s1, const char *s2, const int len)
{
	if (s1 == NULL)
		return NULL;
	if (s2 == NULL)
		return s1;
	int n;
	char *p = s1;
	const char *q = s2;
	for (n = 0; n < len &&*s2!=0;n++)
		*s1++ = *s2++;
    return p;
}

int tj_strcmp(const char *s1, const char *s2)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
	
	if (s1 == NULL)
	{
		if (s2 == NULL)
			return 0;
		else
			return -1;
	}
	else if (s2 == NULL)
		return 1;
	int n;
	for (n = 0;; n++)
	{

		if (*(s1+n) == 0 && *(s2 + n) == 0)
			return 0;
		else if (*(s1 + n) == *(s2 + n))
			continue;
		else
			return int(*(s1 + n) - *(s2 + n));

	}
}

int tj_strcasecmp(const char *s1, const char *s2)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */

	if (s1 == NULL)
	{
		if (s2 == NULL)
			return 0;
		else
			return -1;
	}
	else if (s2 == NULL)
		return 1;
	int n;
	for (n = 0;; n++)
	{
		if (*(s1+n) == 0 && *(s2+n) == 0)
			return 0;
		if (*(s1 + n) >= 'a'&&*(s1 + n) <= 'z'&&*(s2 + n) >= 'A'&&*(s2 + n) <= 'Z'&&*(s1 + n) == *(s2 + n) + 32
			|| *(s1 + n) >= 'A'&&*(s1 + n) <= 'Z'&& *(s2 + n) >= 'a'&&*(s2 + n) <= 'z'&&*(s2 + n) == *(s1 + n) + 32)
			continue;
		else if (*(s1 + n) == *(s2 + n))
			continue;
		else
			return int(*(s1 + n) - *(s2 + n));
	}
}

int tj_strncmp(const char *s1, const char *s2, const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
	if (s1 == NULL)
	{
		if (s2 == NULL)
			return 0;
		else
			return -1;
	}
	else if (s2 == NULL)
		return 1;
	int n;
	for (n = 0;n<len; n++)
	{
		if (*(s1 + n) == 0 && *(s2 + n) == 0)
			return 0;
		else if (*(s1 + n) == *(s2 + n))
			continue;
		else
			return int(*(s1 + n) - *(s2 + n));

	}
    return 0;
}

int tj_strcasencmp(const char *s1, const char *s2, const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
	if (s1 == NULL)
	{
		if (s2 == NULL)
			return 0;
		else
			return -1;
	}
	else if (s2 == NULL)
		return 1;
	int n;
	for (n = 0;n<len; n++)
	{
		if (*(s1 + n) == 0 && *(s2 + n) == 0)
			return 0;
		if (n == len - 1 && *(s1 + n) == *(s2 + n))
			return 0;
		if (*(s1 + n) >= 'a'&&*(s1 + n) <= 'z'&&*(s2 + n) >= 'A'&&*(s2 + n) <= 'Z'&&*(s1 + n) == *(s2 + n) + 32
			|| *(s1 + n) >= 'A'&&*(s1 + n) <= 'Z'&& *(s2 + n) >= 'a'&&*(s2 + n) <= 'z'&&*(s2 + n) == *(s1 + n) + 32)
			if (n == len - 1)
				return 0;
			else
				continue;
		else if (*(s1 + n) == *(s2 + n))
			continue;
		else
			return int(*(s1 + n) - *(s2 + n));
	}
}

char *tj_strupr(char *str)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
	if (str == NULL)
		return NULL;
	int n = 0;
	for (; *(str + n) != 0; n++)
		if (*(str + n) <= 'z'&&*(str + n) > 'a')
			*(str + n) -= 32;
    return str;
}

char *tj_strlwr(char *str)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
	if (str == NULL)
		return NULL;
	int n = 0;
	for (; *(str + n) != 0; n++)
		if (*(str + n) <= 'Z'&&*(str + n) > 'A')
			*(str + n) += 32;
    return str;
}

int tj_strchr(const char *str, const char ch)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
	if (str == NULL)
		return 0;
	int n;
	for (n = 0; *(str+n) != 0; n++)
		if (*(str+n) == ch)
			return n + 1;
    return 0;
}

int tj_strstr(const char *str, const char *substr)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
	if (str == NULL||substr==NULL)
		return 0;
	int m, n, sum1, sum2;
	for (sum1 = 0; *(str+sum1) != 0;)
		sum1++;
	for (sum2 = 0; *(substr+sum2) != 0;)
		sum2++;
	for (n = 0; n <= (sum1 - sum2); n++)
	{
		if (*(str + n) == *substr)
			for (m = 0; m < sum2; n++)
			{
				if (*(str + n) != *(substr + m))
				{
					n = n - m;

					break;
				}
				if (m == sum2 - 1)
					return n - m + 1;
				m++;
			}

	}
    return 0;
}

int tj_strrchr(const char *str, const char ch)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
	if (str == NULL || ch == NULL)
		return 0;
	int sum;
	for (sum = 0; *(str+sum) != 0;)
		sum++;
	for (; *(str+sum - 1) != 0; sum--)
	{
		if (*(str + sum - 1) == ch)
			return sum;
		if (sum == 1)
			break;
	}
    return 0;
}

int tj_strrstr(const char *str, const char *substr)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
	if (str == NULL || substr == NULL)
		return 0;
	int m = 0, n = 0, sum1, sum2;
	for (sum1 = 0; *(str + sum1) != 0;)
		sum1++;
	for (sum2 = 0; *(substr+sum2) != 0;)
		sum2++;
	for (n = sum1 - sum2; n >= 0; n--)
	{
		if (*(str+n) == *substr)
		{
			for (m = 0; m < sum2; n++)
			{
				if (*(str + n) != *(substr+m))
				{
					n = n - m;
					break;
				}
				if (m == sum2 - 1)
					return n - m + 1;
				m++;

			}
		}

	}
    return 0;
}

char *tj_strrev(char *str)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
	if (str == NULL)
		return NULL;
	int n, j = 1, k, sum;
	for (sum = 0; *(str +sum) != 0;)
		sum++;
	k = sum;
	for (n = 0; n<k; n++)
	{
		*(str + k) = *(str + k-1);

		for (sum = k; sum >= j + 1; sum--)

			*(str+sum - 1) = *(str + sum - 2);

		j++;
		*(str + n) = *(str + k);
	}
	*(str + k) = 0;
    return str;
}
