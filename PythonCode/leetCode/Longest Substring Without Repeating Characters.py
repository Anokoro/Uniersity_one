# _*_ coding:utf-8 _*_
# Given "abcabcbb", the answer is "abc", which the length is 3.

# 基础版

'''
length = len(s) #字符串长度
start_index=0 #当前遍历开始位置
end_index=length # 当前遍历结束位置
longest=0 # 当前最长子串
for i in range(length):
    next_same=s.find(s[start_index],start_index+1,end_index)
    if next_same:
        print next_same
        before = next_same-start_index
        after = end_index-next_same
        if(after > before):
            start_index = next_same + 1
            longest = before
        elif(after < before):
            end_index = next_same - 1
            longest = after
    else:
        start_index+=1
    print 'start%d end%d' %(start_index,end_index)
    i=start_index
    if start_index==end_index:break
return longest
'''
# 155ms 20.78%
class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        subs = []
        largest = 0
        for ch in s:
            if ch not in subs:
                subs.append(ch)
            else:
                #如果发现重复，则先看一下当前已经找到的未重复的长度
                if (len(subs) > largest):
                    largest = len(subs)
                # 然后删除从开头到第一次出现重复的那个字母的所有子串，
                del subs[0:subs.index(ch) + 1]
                # 将新的子串加入，继续运行
                subs.append(ch)
        if (len(subs) > largest):
            largest = len(subs)
        return largest

so = Solution()
print so.lengthOfLongestSubstring('jbpnbwwd"')