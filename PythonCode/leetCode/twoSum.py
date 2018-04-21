# _*_ coding:utf-8 _*_
# 7021ms 2.82%
class Solution0(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        numc = nums
        for a,i in enumerate(nums):
            for b,j in enumerate(numc):
                if i+j == target and a != b:
                    return [a,b]

# 5068ms 22.43%
class Solution1(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        length=len(nums)
        for i in range(0,length):
            for j in range(i+1,length):
                if nums[i]+nums[j]==target:
                    return [i,j]
# 1655ms 30.81%
class Solution2(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        #nums.sort() # 不能考虑排序的做法，因为此题要求的必须是原始的index，排序后会失去这个信息
        for first_num in nums:
            second_num = target-first_num
            index_first = nums.index(first_num)
            second_num_start_index = index_first+1
            if second_num in nums[second_num_start_index:]:
                index_second = nums[second_num_start_index:].index(second_num)
                return [index_first,second_num_start_index+index_second]
# 40ms 97.67%
class Solution3(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        # 这个思路就比较清奇了，用字典的方式遍历nums的所有值，并依次将每个已遍历过并且没有在之前的已遍历过的值中找到配对
        # 则将其记录到mydict中，mydict就是用来记录已经遍历过的值
        # 后续的每一个值都是和前面已经遍历过的值进行配对，找到位置
        # 相当于是用第二个值去找第一个值
        mydict = {} #初始化一个空的字典
        indexlist = []
        for (index_i, value_i) in enumerate(nums):
            value_j = target - value_i
            if value_j not in mydict:
                mydict[value_i] = index_i
            else:
                index_j = mydict[value_j]
                indexlist.extend([index_j,index_i])
        return indexlist #放在这里更合适，这样如果有多个结果的话，不会发生错误
                #return indexlist[::-1] # 如果放在这里，找到一个结果就会返回

so = Solution3()
print(so.twoSum([3,2,4],6))