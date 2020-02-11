#!/usr/bin/python
# -*- coding:utf-8 -*-

'''
    求两数之和
'''


class Solution:

    def twoSum(self, nums, target):
        '''
        :param nums: List[int]
        :param target: int
        :return: List[int]
        '''
        hashmap= {}
        # print('hashmap是',hashmap)
        for i ,num in enumerate(nums):
            num1 = num
            num2 = target - num1
            if num2 in hashmap:
                # print('num1是', num1)
                # print('num2是', num2)
                # print(i)
                # print([hashmap[num2],i])

                list= [hashmap[num2],i]

            # 把num1的值和位置i，存如hashmap中，
            hashmap[num1] =i
            # print('现在hashmap是',hashmap)
        print(list)
        return list




if __name__ =='__main__':
    nums1 = [2,7,11,15]
    target1 = 9
    solution = Solution()
    solution.twoSum(nums1,target1)

