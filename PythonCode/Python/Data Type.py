# _*_ coding:utf-8 _*_

print "pow(2,10)",pow(2,10)
print "2**10 :",2**10
z=1.23e-4 + 5.6e+8j
print "虚数部分",z.imag,"实数部分",z.real

i=4
f=float(i)
c=complex(f)
# i=int(c) This is wrong
i=int(f)
print i,f,c

#import  math
import  random
#seed(10)
print (random(0,10))