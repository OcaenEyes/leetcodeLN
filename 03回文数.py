#!/usr/bin/python
# -*- coding:utf-8 -*-
'''
    判断一个正整数是否是回文数；
    回文数：指正序（从左到右）和倒序（从右到左）读数都是一样的整数
    示例
        输入121
        输出 true
        输入-121
        输出 false
'''

'''
    思路：反转数字
        负整数直接输出false    
'''
class Solution():
    def isPalindrome(self,x):
        '''

        :param x: int
        :return: bool
        '''

        if x < 0 :
            print(False)
            return False
        else:
            # 数字转为字符串，获取反转后的的字符串
            xstr = str(x)
            y = xstr[::-1]
            # 比对 反转后的字符串与  原字符串的匹配情况
            if y == xstr:
                print(True)
                return  True
            else:
                print(False)
                return False






if __name__ =='__main__':
    x = 12321
    solution = Solution()
    solution.isPalindrome(x)
