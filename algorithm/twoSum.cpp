#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
    unordered_map<int, int> um1;
    vector<int> answer;
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            for (int i = 0; i < nums.size(); i++)
            {
                um1[nums[i]] = i;
            }
            for (int i = 0; i < nums.size(); i++){
                int temp = target - nums[i];
                if (um1[temp] && i!=um1[temp])
                {
                    answer.push_back(um1[temp]);
                    answer.push_back(i);
                    return answer;
                }
            }
            return answer;
        }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> nums = {1, 5, 6, 19, 21, 34};
    vector<int> ans = s.twoSum(nums, 20);
    for(int i:ans){
        cout<<i<<endl;
    }
    return 0;
}
