/*
 * @Author: OCEAN.GZY
 * @Date: 2023-02-09 23:53:13
 * @LastEditors: OCEAN.GZY
 * @LastEditTime: 2023-02-09 23:59:35
 * @FilePath: /leetcodeLN/c++_prj/03.数组中重复的数字.cpp
 * @Description: 注释信息
 */
#include <vector>
#include <iostream>

class Solution
{
public:
    int findRepeatNumber(std::vector<int> &nums)
    {
        std::sort(nums.begin(), nums.end());

        for (int i = 1; i < static_cast<int>(nums.size()); i++)
        {
            if (nums[i - 1] == nums[i])
                return nums[i];
        }
        return -1;
    };
};

int main()
{
    Solution solution;
    std::vector<int> inputs;

    inputs.push_back(2);
    inputs.push_back(3);
    inputs.push_back(1);
    inputs.push_back(0);
    inputs.push_back(2);
    inputs.push_back(5);
    inputs.push_back(3);

    int a = solution.findRepeatNumber(inputs);
    std::cout << a << std::endl;
}
