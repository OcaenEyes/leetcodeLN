/*
 * @Author: OCEAN.GZY
 * @Date: 2023-02-10 16:12:23
 * @LastEditors: OCEAN.GZY
 * @LastEditTime: 2023-02-10 17:29:23
 * @FilePath: /leetcodeLN/c++_prj/05替换空格/替换空格.cpp
 * @Description: 注释信息
 */
#include <string>

#include <iostream>
class Solution
{
private:
    /* data */
public:
    Solution(/* args */);
    ~Solution();
    std::string replaceSpace(std::string s);
};

Solution::Solution(/* args */)
{
}

Solution::~Solution()
{
}

std::string Solution::replaceSpace(std::string s)
{
    std::string newV = "%20";
    std::string oldV = " ";
    for (std::string::size_type pos = 0; pos != std::string::npos; pos += newV.length())
    {
        pos = s.find(oldV, pos);
        std::cout << "s.find(oldV, pos),此时的pos是" << pos << std::endl;
        if (pos != std::string::npos)
        {
            s.replace(pos, oldV.length(), newV);
        }
        else
            break;
    }
    return s;
}

int main(int argc, char **argv)
{
    Solution solution;
    std::string s = "     ";
    std::string res = solution.replaceSpace(s);

    std::cout << res << std::endl;
}
