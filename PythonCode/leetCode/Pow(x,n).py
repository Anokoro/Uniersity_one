#_*_ coding:utf-8 _*_
# %71.44% 39ms %91.45% 37ms
class Solution1(object) :
    def myPow(self, x, n):
        """
        :type x: float
        :type n: int
        :rtype: float
        """
        return x**n
# 17.92% 49ms  58.25% 40ms
class Solution2(object) :
    def myPow(self, x, n):
        """
        :type x: float
        :type n: int
        :rtype: float
        """
        if (n == 0):
            return 1
        if (n < 0):
            n = -n
            x = 1 / x
        # 奇数偶数次幂分别处理
        if n % 2 == 0:
            return pow(x * x, n / 2)
        else:
            return x * pow(x * x, n / 2)

so1=Solution1()
print "Solution1: %f"%so1.myPow(2.0000,10)
so2=Solution2()
print "Solution2: %f"%so2.myPow(2.0000,10)