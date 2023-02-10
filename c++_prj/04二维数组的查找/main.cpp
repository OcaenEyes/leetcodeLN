/*
 * @Author: OCEAN.GZY
 * @Date: 2023-02-10 00:02:47
 * @LastEditors: OCEAN.GZY
 * @LastEditTime: 2023-02-10 15:57:44
 * @FilePath: /leetcodeLN/c++_prj/04二维数组的查找/main.cpp
 * @Description: 注释信息
 */

#include <vector>
#include <iostream>

class Solution
{
private:
    /* data */
public:
    Solution(/* args */);
    ~Solution();
    bool findNumberIn2DArray(std::vector<std::vector<int> > &matrix, int t);
    int findNumberIn2DArray1(std::vector<std::vector<int> > &matrix, int t);
};

Solution::Solution(/* args */)
{
}

Solution::~Solution()
{
}

/**
 * @brief  暴力for循环 遍历
 *
 * @param matrix
 * @param t
 * @return true
 * @return false
 */
bool Solution::findNumberIn2DArray(std::vector<std::vector<int> > &matrix, int t)
{

    int x = matrix.size();
    int y = matrix[0].size();

    if (x == 0 || y == 0)
        return false;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (matrix[i][j] == t)
                return true;
        }
    }
    return false;
}

/**
 * @brief
 * 从右上角开始走，利用这个顺序关系可以在O(m+n)的复杂度下解决这个题：
        如果当前位置元素比target小，则row++
        如果当前位置元素比target大，则col--
        如果相等，返回true
        如果越界了还没找到，说明不存在，返回false
 *
 * @param matrix
 * @param t
 * @return int
 */
int Solution::findNumberIn2DArray1(std::vector<std::vector<int> > &matrix, int t)
{
    int x = matrix.size();
    int y = matrix[0].size();

    if (x == 0 || y == 0)
        return -1;

    int row = 0;
    int col = y - 1;

    while (row < x && col >= 0)
    {
        if (matrix[row][col] > t)
        {
            col--;
        }
        else if (matrix[row][col] < t)
        {
            row++;
        }
        else
        {
            return 0;
        }
    }

    return 1;
}

int main(int argc, char **argv)
{
    Solution solution;
    std::vector<std::vector<int> > _matrix;
    std::vector<int> _matrix_y;
    for (int i = 0; i < 4; i++)
    {
        switch (i)
        {
        case 0:
            _matrix_y.push_back(1);
            _matrix_y.push_back(4);
            _matrix_y.push_back(7);
            _matrix_y.push_back(11);
            _matrix_y.push_back(15);
            break;
        case 1:
            _matrix_y.push_back(2);
            _matrix_y.push_back(5);
            _matrix_y.push_back(8);
            _matrix_y.push_back(12);
            _matrix_y.push_back(19);
            break;
        case 2:
            _matrix_y.push_back(3);
            _matrix_y.push_back(6);
            _matrix_y.push_back(8);
            _matrix_y.push_back(16);
            _matrix_y.push_back(22);
            break;
        case 3:
            _matrix_y.push_back(10);
            _matrix_y.push_back(13);
            _matrix_y.push_back(14);
            _matrix_y.push_back(17);
            _matrix_y.push_back(24);
            break;

        default:
            break;
        }
        _matrix.push_back(_matrix_y);
        _matrix_y.clear();
    }

    int r1 = solution.findNumberIn2DArray1(_matrix, 10);
    std::cout << "r1结果是" << r1 << std::endl;

    bool r2 = solution.findNumberIn2DArray(_matrix, 24);
    std::cout << "r2结果是" << r2 << std::endl;
}
