#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        for (auto &i : nums)
        {
            i = pow(i, 2);
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> nums{1, 1, 4, -5, -6, 8, 56, 99};
    s.sortedSquares(nums);
    for (auto &i : nums)
    {
        cout << i << endl;
    }
    return 0;
}
