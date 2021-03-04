#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> nums)
    {
        unordered_map<int, bool> um1;
        for (int i : nums)
        {
            if (!um1[i])
            {
                um1[i] = true;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> nums = {1, 2, 4, 6};
    cout << s.containsDuplicate(nums) << endl;
    return 0;
}
