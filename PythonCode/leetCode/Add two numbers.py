# _*_ coding:utf-8 _*_
'''
Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
'''
# 在阅读下面的注释的时候请注意：这里我一开始犯了一个错误，混淆了list和ListNode类型，
# 所以我认为可行的方案solution0均是基于list的，Solution1之后的才是是基于ListNode的
class Solution0(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        len1 = len2 = 0
        '''
        
        下面注释是一些求长度的方法，所有方法在IDE中均可通过，但是一到LeetCode就跪了，MMP
        求长度1
        len1=len(l1)
        len2=len(l2)
        如果是在自己的IDE里面，直接使用len()就行了，但是要提交到LeetCode上还是乖乖自己求len吧
        
        
        '''
        '''
        求长度2
        len1=len2=0
        for l in l1:
            len1+=1
        for l in l2:
            len2+=1
            
        这TM也不行？？？
        TypeError: 'ListNode' object is not iterable
        '''
        if len1>=len2:
            for i in range(0,len2):
                l1[i]+=l2[i]
                if l1[i]>=10:
                    l1[i]%=10
                    l1[i+1]+=1
            return l1
        else:
            for i in range(0,len1):
                l2[i]+=l1[i]
                if l2[i]>10:
                    l2[i]%=10
                    l2[i+1]+=1
            return l1

'''
# mmp在LeetCode 的ListNode类里面没有len()方法,其ListNode类定义如下
        class ListNode: 
            def init(self, x):
                self.val = x
                self.next = None
'''
# 讲真的，这个时间真的不能太在意，
# 同样一份代码，前后两次运时间差异在60ms波动，第一次运行了200ms，结果排名还不到10%
# 需要注意的就是ListNode在IDE中会报错
# 146ms 53.42%
class Solution1(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        dummy, flag = ListNode(0), 0
        head = dummy
        while flag or l1 or l2:
            node = ListNode(flag)
            if l1:
                node.val += l1.val
                l1 = l1.next
            if l2:
                node.val += l2.val
                l2 = l2.next
            flag = node.val / 10
            node.val %= 10
            head.next = node
            head = head.next  # head.next, head = node, node
        return dummy.next
# 140ms 72.39%
class Solution2(object):
    def addTwoNumbers(self,l1,l2):
        if not l1: return l2
        if not l2: return l1
        dummy = ListNode(0)
        p = dummy
        flag = 0
        while l1 and l2:
            tmp = l1.val + l2.val + flag
            p.next = ListNode(tmp % 10)
            flag = tmp / 10
            l1, l2, p = l1.next, l2.next, p.next
        if l1:
            while l1:
                tmp = l1.val + flag
                p.next = ListNode(tmp % 10)
                flag = tmp / 10
                l1, p = l1.next, p.next
        if l2:
            while l2:
                tmp = l2.val + flag
                p.next = ListNode(tmp % 10)
                flag = tmp / 10
                l2, p = l2.next, p.next
        if flag == 1: p.next = ListNode(flag)
        return dummy.next