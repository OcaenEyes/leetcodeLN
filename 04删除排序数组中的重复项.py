#!/usr/bin/python
#-*- coding:utf-8 -*-

'''
    给定一个排序数组，需原地删除重复出现的元素；
    使得每个元素只出现一次，返回移除后数组的新长度；
    示例：
        给定数组 nums = [1,1,2]
        函数 应返回新的长度2，并且 原数组 nums的两个元素修改为1，2
'''

'''
    思路：
        因为是排序后的数组，可以考虑相邻比对，发现相等则抛出这个数， 数组长度减1
'''

class Solution():
    def removeDuplicates(self,nums):
        '''

        :param nums: List[int]
        :return: int
        '''

        i =1
        j = len(nums)

        while i < j:
            if nums[i] == nums[i -1]:
                nums.pop(i)

                j = j-1

            else:
                i = i+1

        print(len(nums))
        print(nums)
        return (len(nums))







if __name__ == '__main__':
    nums1 = [1,1,1,2,3]
    solution = Solution()
    solution.removeDuplicates(nums1)