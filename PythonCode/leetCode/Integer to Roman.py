#_*_ coding:utf-8 _*_

'''
补充知识：请自行百度罗马数字的表示方法,或者参考我的solution2 和solution3通过代码去理解
'''
# 三次运行结果
# 4.90%  234ms
# 19.59% 182ms
# 46.60% 161ms
class Solution1(object):
    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """
        roman={
            '1':'I',
            '10':'X',
            '100':'C',
            '1000':'M',
            '5':'V',
            '50':'L',
            '500':'D'
        }
        thousand=num/1000
        hundred=(num/100)%10
        ten=(num/10)%10
        single=num%10
        result='' # 拼接结果
        for i in range(thousand):
            result+=roman['1000']

        if hundred == 9:
            result+=roman['100']+roman['1000']
        else:
            if hundred>=5:
                result+=roman['500']
                hundred-=5
            if hundred==4:
                result += roman['100']+roman['500']
            else:
                for i in range(hundred):
                    result+=roman['100']

        if ten == 9:
            result+=roman['10']+roman['100']
        else:
            if ten>=5:
                result+=roman['50']
                ten-=5
            if ten==4:
                result += roman['10'] + roman['50']
            else:
               for i in range(ten):
                result+=roman['10']
        if single == 9:
            result+=roman['1']+roman['10']
        else:
            if single>=5:
                result+=roman['5']
                single-=5
            if single==4:
                result += roman['1'] + roman['5']
            else:
                for i in range(single):
                    result+=roman['1']
        return result
'''
在solution1的基础上进行简化和统一处理，增加了程序的可读性和逻辑性，
将罗马数字的表示方法很清楚地封装到一个函数中
说真的，并没有对算法进行优化，所以运行时间上和solution1没有太大差别，甚至可能慢一点
毕竟字典定义成了公有变量，并且str_1，str_5，str_10都需要动态计算，而在1里面是直接给定的
因此会导致比1中略微慢一点
'''
class Solution2(object):
    roman = {'1': 'I', '10': 'X', '100': 'C', '1000': 'M', '5': 'V', '50': 'L', '500': 'D'}
    # num  表示该位的数字
    # rate 表示进率
    def convert(self,num,rate):
        tmp_result=''
        # 在使用int 转str 的时候，后面的一定要括起来作为一个整体
        str_1 ="%d" % (1*rate)
        str_5 = "%d" % (5 * rate)
        str_10 = "%d" % (10 * rate)
        if num == 9:
            tmp_result+=self.roman[str_1]+self.roman[str_10]
        else:
            if num>=5:
                tmp_result+=self.roman[str_5]
                num-=5
            if num==4:
                tmp_result += self.roman[str_1]+self.roman[str_5]
            else:
                for i in range(num):
                    tmp_result+=self.roman[str_1]
        return tmp_result
    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """

        thousand=num/1000
        hundred=(num/100)%10
        ten=(num/10)%10
        single=num%10
        result=self.convert(thousand,1000)+self.convert(hundred,100)+self.convert(ten,10)+self.convert(single,1) # 拼接结果

        return result

'''
这第三种就比较粗暴了，但应该也是不可能有更高效的了
（真的，我感觉剩下的只是一些误差或者是算术部分的小差别了，真正的思路上这个应该是最高效的了）
因为罗马数字只能表示4位数，所以列出每一位的所有10种情况，
然后直接使用列表定位就好了
'''
# 54.82% 157ms
# 65.09% 151ms
# 84.99% 126ms
# 90.08% 118ms
class Solution3(object):
    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """
        thousand_all = ["", "M", "MM", "MMM"]
        hundred_all = ["", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"]
        ten_all = ["", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"]
        single_all =["", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"]
        thousand = num / 1000
        hundred = (num / 100) % 10
        ten = (num / 10) % 10
        single = num % 10
        return thousand_all[thousand]+hundred_all[hundred]+ten_all[ten]+single_all[single]

so1=Solution1()
print so1.intToRoman(3999)

so2=Solution2()
print so2.intToRoman(3999)

so3=Solution3()
print so3.intToRoman(3999)