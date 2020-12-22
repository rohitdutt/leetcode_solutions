#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int count = 0;
        int max = 0;
        for (auto &i : nums)
        {
            if (i == 1)
            {
                count++;
                cout << count << endl;
                if (count > max)
                {
                    max = count;
                }
            }
            else
            {
                count = 0;
            }
        }
        return max;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> v{1, 1, 0, 1, 1, 1};
    cout << s.findMaxConsecutiveOnes(v);
    return 0;
}
