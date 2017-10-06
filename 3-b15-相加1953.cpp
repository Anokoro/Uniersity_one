/* 1552239 计二 y岳昊玮*/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <windows.h> //取系统时间
using namespace std;

int main()
{
	LARGE_INTEGER tick, fc_begin, fc_end;

	QueryPerformanceFrequency(&tick);	//获得时钟频率
	QueryPerformanceCounter(&fc_begin);	//获得初始硬件定时器计数
	int a, b, c,d,e,f,g,h,i,sum2=0,sum3=0,sum1=0,sum=0,total=0;
	
	
	for (a=1; a < 10; a++)
	{
		for (b = 1; b < 10  ; b++)
		{
			if (b == a)
				continue;
			for (c = 1; c < 10 ; c++)
			{
				if (c == a || c == b)
					continue;
				sum1 = a*100 + b*10 + c;
				for (d = 1; d < 10; d++)
				{
					if (d == a || d == b || d == c)
						continue;
					for (e = 1; e < 10; e++)
					{
						if (e == a || e == b || e == c || e == d)
							continue;
						for (f = 1; f < 10 ; f++)
						{
							if (f == a || f == b || f == c || f == d || f == e)
								continue;
							sum2 = d*100 + e*10 +f ;
							
							for (g = 1; g < 10  ; g++)
							{
								if (g == a || g == b || g == c || g == d || g == e || g == f)
									continue;
								for (h = 1; h < 10 ; h++)
								{
									if (h == a || h == b || h == c || h == d || h == e || h == f || h == g)
										continue;
									for (i = 1; i < 10  ; i++)
									{
										if (i == a || i == b || i == c || i == d || i == e || i == f || i == g || i == h)
											continue;
										sum3 = g * 100 + h * 10 + i;
										
											
										sum=sum1+sum2+ sum3;
										if (sum == 1953&&sum1<sum2&&sum2<sum3)
										{
											cout << sum1 << '+' << sum2 << '+' << sum3 << '=' << sum << endl;
											total = total + 1;
											if (total%10==0)
												getchar();
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout << "total=" << total << endl;
	QueryPerformanceCounter(&fc_end);//获得终止硬件定时器计数
	cout << setiosflags(ios::fixed) << setprecision(3);
	cout << "时钟频率：" << double(tick.QuadPart) / 1024 / 1024 << "GHz" << endl;
	cout << setprecision(0);
	cout << "时钟计数：" << double(fc_end.QuadPart - fc_begin.QuadPart) << endl;
	cout << setprecision(6) << double(fc_end.QuadPart - fc_begin.QuadPart) / double(tick.QuadPart) << "秒" << endl;

	return 0;
}
