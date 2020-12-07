#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    int maxIndex;

public:
    int dominantIndex(vector<int> &nums)
    {
        maxIndex = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > nums[maxIndex])
            {
                maxIndex = i;
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] * 2 > nums[maxIndex] && maxIndex != i)
            {
                return -1;
            }
        }
        return maxIndex;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> nums{1, 9, 5, 8, 3, 15};
    cout << s.dominantIndex(nums);
    return 0;
}
