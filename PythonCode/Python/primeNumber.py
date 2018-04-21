# _*_ coding:utf-8 _*_
from __future__ import division
import  math
# 计算素数
def primeNumber(m,n):
    sum=0
    for i in range(m,n+1): #这里+1是为了把n这个值也包括进来，range只会遍历m~n-1这些值
        for j in range(2,int(math.sqrt(i))+1):
            if i%j == 0:
                break
            elif (j == int(math.sqrt(i))):
                sum+=1
                print i,
    print '\n%d到%d之间共有%d个素数' % (m,n,sum)
primeNumber(101,199)


