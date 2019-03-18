#!/usr/bin/python
# -*-coding: utf-8 -*-

'''
    示例：
        输入：123
        输出：321

        输入：-123
        输出：-321
'''
'''
    实现思路：
        将数字，转为字符串，将字符串转为列表；
        将列表内以 ""组合为新的字符串
        将字符串再次转换为整数
'''

class Solution():
    def reverse(self,x):

        '''

        :param x: int
        :return: int
        '''

        if x == 0:
            return 0

        # 转换为字符串
        xstr = str(x)
        # 转换为列表
        li =list(xstr)
        if li[0] == '-':
            a = li.pop(0)
            li.reverse()

            li.insert(0,a)
            rest ="".join(li)
            answer = int(rest)

            if answer < (-2)**31:
                return 0
            print(answer)
            return answer
        else:
            li.reverse()
            rest = "".join(li)
            answer = int(rest)

            if answer > (2 ** 31 -1):
                return 0
            print(answer)
            return answer






if __name__ == '__main__':
    x1 = -123
    solution = Solution()
    solution.reverse(x1)

