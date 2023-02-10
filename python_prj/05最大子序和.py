#!/usr/bin/python
# -*- coding:utf-8 -*-

'''
    给定一个整数数组nums, 找到一个巨头最大和的连续子数组；
    子数组最少需要包含一个元素；

    示例：
        输入: [-2,1,-3,4,-1,2,1,-5,4]
        输出: 6
        找到数组是[4,-1,2,1]

'''

'''
    思路一：
        游标滑动，从第一位开始滑动计算累加求和：
            当 本次和 < 0 , 最大值继续保持当前最大值； 重置sum 为0 
            当 本次和 > 当前最大值 的时候，更新本次和 为最大值；直到循环结束
            
'''

class Solution():
    def maxSubArray(self,nums):
        '''

        :param nums: List[int]
        :return: int
        '''
        sum = 0
        max_sub_sum = nums[0]
        for num in nums:
            # print('每一个num值',num)
            sum = sum + num
            if sum > max_sub_sum:
                max_sub_sum = sum
                print('最大和',max_sub_sum)
            if sum < max_sub_sum:
                max_sub_sum = max_sub_sum
                print('最大和', max_sub_sum)
            if sum < 0 :
                max_sub_sum = max_sub_sum
                sum = 0
                print('最大和', max_sub_sum)

        return max_sub_sum





if __name__ =='__main__':
    nums1 = [-2,1,4]

    solution = Solution()
    solution.maxSubArray(nums1)
