#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
    unordered_map<int, int> um1;
    vector<int> answer;

public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            um1[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            int temp = target - nums[i];
            if (um1[temp])
            {
                answer.push_back(um1[temp]);
                answer.push_back(i);
                return answer;
            }
        }
        return answer;
    }
};

int main()
{
    Solution s1;
    vector<int> values = {1, 3, 4, 2};
    vector<int> answer;
    answer = s1.twoSum(values, 6);
    for (int i : answer)
    {
        cout << i << endl;
    }
}